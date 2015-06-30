# coding=gbk
import os
import pymongo
import misaka
import commands
import urllib
import json

import tornado.gen
import tornado.httpserver
import tornado.httpclient
import tornado.ioloop
import tornado.options
import tornado.web
import tornado.websocket

from pymongo import MongoClient
from tornado.options import define, options
define("port", default=80, help="run on the given port", type=int)

class IndexHandler(tornado.web.RequestHandler):
	def get(self):
		self.render('index.html')

# ----- About User Status ----- #

class LoginHander(tornado.web.RequestHandler):
	def get(self):
		self.render('login.html', loginOK=True)

	def post(self):
		username = self.get_argument("username", "")
		password = self.get_argument("password", "")

		if username != "" and password != "" and \
			self.application.userSet.has_key(username) and \
			password == self.application.userSet[username]:
			
			self.set_secure_cookie("username", username)
			self.redirect("/user")
			return

		self.render('login.html', loginOK=False)	# panel-danger

class RegistHandler(tornado.web.RequestHandler):
	def get(self):
		self.render('regist.html', registOK=True)

	def post(self):
		username = self.get_argument("username", "")
		password = self.get_argument("password", "")
		confirm  = self.get_argument("confirm",  "")

		if username != "" and password != "" and confirm != "" \
			and password == confirm \
			and self.application.userSet.has_key(username) == False:

			self.application.userSet.addNewUser(username, password)
			self.set_secure_cookie("username", username)
			self.redirect("/user")
		self.render('regist.html', registOK=False) 

class LogoutHandler(tornado.web.RequestHandler):
	def get(self):
		self.clear_cookie("username")
		self.redirect("/")

class UserHandler(tornado.web.RequestHandler):
	@tornado.web.authenticated
	def get(self):
		self.render('user.html')

	def get_current_user(self):
		return self.get_secure_cookie("username")

class UserStatucHandler(tornado.web.RequestHandler):
	def get(self):
		print "getting status"
		username = self.get_secure_cookie("username")
		if username == None or username == "":
			username = "登陆"
		self.write('{"username": "%s"}' % username)

# ----- About User Status End ----- #

# ----- About DataBase Data ----- #

class ProblemItem(object):
	def __init__(self, proID, proTitle, stars):
		super(ProblemItem, self).__init__()
		self.kv = {}
		self.kv["id"] = proID
		self.kv["title"] = proTitle
		self.kv["stars"] = stars
		self.kv["accepted"] = 0
		self.kv["submissions"] = 0

	def __getitem__(self, key):
		return self.kv[key]

	def __setitem__(self, key, value):
		self.kv[key] = value

	def tt(self):
		print self.kv["id"], self.kv["title"], self.kv["stars"]

	def setRatio(self, accepted, submissions):
		self.kv["accepted"] = accepted
		self.kv["submissions"] = submissions

	def setPro(self, proDes, inputDes, outputDes, sapInput, sapOutput, author, recommend, timeLimit):
		self.kv["proDes"] = proDes.replace("\r\n", "<br/>")
		self.kv["inputDes"] = inputDes.replace("\r\n", "<br/>")
		self.kv["outputDes"] = outputDes.replace("\r\n", "<br/>")
		self.kv["sapInput"] = sapInput.replace("\r\n", " <br/> ")
		self.kv["sapOutput"] = sapOutput.replace("\r\n", "<br/>")
		self.kv["author"] = author.replace("\r\n", "<br/>")
		self.kv["recommend"] = recommend.replace("\r\n", "<br/>")
		self.kv["timeLimit"] = timeLimit

class ProblemSet(object):
	def __init__(self):
		client = MongoClient('localhost', 27017)
		self.db = client['OnlineJudge']
		self.coll_problemShort = self.db['ProblemShort']
		self.coll_problemLong  = self.db['ProblemLong']
		self.coll_problemRatio = self.db['ProblemRatio']

		self.proList = []

		size = self.coll_problemShort.count()
		for i in range(1, size+1):
			proshort = self.coll_problemShort.find_one({"id":1000+i})
			prolong  = self.coll_problemLong.find_one({"id":1000+i})
			proratio = self.coll_problemRatio.find_one({"id":1000+i})

			self.proList.append(ProblemItem(proshort["id"], proshort["title"], proshort["hard"]))
			self.proList[i-1].setPro(prolong["proDes"], prolong["inputDes"], prolong["outputDes"],
									 prolong["sapInput"], prolong["sapOutput"], prolong["author"],
									 prolong["recommend"], prolong["timeLimit"])
			self.proList[i-1].setRatio(proratio["accepted"], proratio["submissions"])

		for x in self.proList:
			print x.tt()

	def getProblemSet(self):
		return self.proList

	def getProblem(self, index):
		index = index - 1000
		length = len(self.proList)
		if index <= length:
			return self.proList[index-1]
		return None

	def addProblemItem(self, proID, title, stars, proDes, inputDes, outputDes, sapInput, sapOutput,\
					   recommend, author,timeLimit):
		itemshort = {"id":proID, "title":title, "hard":stars}
		itemlong  = {"id":proID, "proDes":proDes, "inputDes":inputDes,\
					 "outputDes":outputDes, "sapInput":sapInput, \
					 "sapOutput":sapOutput, "author":author,\
					 "recommend":recommend, "timeLimit":timeLimit}
		self.coll_problemShort.insert(itemshort)
		self.coll_problemLong.insert(itemlong)
		self.coll_problemRatio.insert({"id":proID, "accepted":0, "submissions":0})

		self.proList.append(ProblemItem(proID, title, stars))
		self.proList[ len(self.proList)-1 ].setPro(proDes, inputDes, outputDes,\
						  					sapInput, sapOutput, author,\
						  					recommend, timeLimit)

	def addProblemRatio(self, AC, Submit):
		pass

class StatusSet(object):
	def __init__(self):
		client = MongoClient('localhost', 27017)
		db = client["OnlineJudge"]
		self.coll_status = db["ProblemStatus"]

		self.statList = []

		size = self.coll_status.count()
		for i in range(1, size+1):
			statusi = self.coll_status.find_one({"runID":i})
			self.statList.insert(0, {
				"runID": statusi["runID"],
				"id": statusi["id"],
				"result": statusi["result"],
				"time": statusi["time"],
				"memory": statusi["memory"],
				"length": statusi["length"],
				"language": statusi["language"],
				"author": statusi["author"]
				})

	def getStatusSet(self):
		return self.statList

	def addStatus(self, runID, proID, result, time, memory, length, language, author):
		self.statList.insert(0, {
			"runID": runID, "id": proID, "result": result, "time": time, "memory": memory,
			"length": length, "language": language, "author": author
			})

	def setResult(self, runID, kvResult):
		kvsize = len( kvResult )
		statsize = len( self.statList )
		index = statsize - runID
		for k in kvResult.keys():
			self.statList[index][k] = kvResult[k]

		self.coll_status.insert({
				"runID": self.statList[index]["runID"],
				"id": self.statList[index]["id"],
				"result": self.statList[index]["result"],
				"time": self.statList[index]["time"],
				"memory": self.statList[index]["memory"],
				"length": self.statList[index]["length"],
				"language": self.statList[index]["language"],
				"author": self.statList[index]["author"]
			})


class UserSet(object):
	def __init__(self):
		client = MongoClient('localhost', 27017)
		db = client['OnlineJudge']
		self.coll_userpw = db['UserPW']

		self.kv = {}

		for u in self.coll_userpw.find():
			print u["username"], u["password"]
			self.kv[ u["username"] ] = u["password"]

	def __getitem__(self, key):
		return self.kv[key]

	def has_key(self, key):
		return self.kv.has_key(key) == 1

	def addNewUser(self, username, password):
		self.coll_userpw.insert({"username":username,
								 "password":password})
		self.kv[username] = password

# ----- About Database end ----- #

# ----- About Problem Index ----- #

class ProblemHandler(tornado.web.RequestHandler):
	def get(self):
		self.render('problem.html', problems=self.application.problemSet.getProblemSet())

class ProblemItemHandler(tornado.web.RequestHandler):
	def get(self, proID):
		proID = int(proID);
		if proID <= 1000:
			self.redirect("/problem")
			return

		problemItem = self.application.problemSet.getProblem(proID)
		
		if problemItem == None:
			print "ProblemHandler get priID error"
			self.redirect("/problem")
			return

		preOK = proID > 1001
		nextOK = proID < (self.application.problemCnt+1000)

		usr = self.get_secure_cookie("username")
		if usr == None:
			usr = "登陆"
		self.render('problemItem.html', item=problemItem, preOK=preOK, nextOK=nextOK, user=usr)

class AddProbleItemHandler(tornado.web.RequestHandler):
	@tornado.web.authenticated
	def get(self):
		username = self.get_current_user()
		if username == "admin":
			self.render('addProblem.html', addOK=True)
			return

		self.redirect("/")

	@tornado.web.authenticated
	def post(self):
		timeLimit 	= int(self.get_argument("timeLimit", ""))*1000
		stars		= int(self.get_argument("stars", ""))
		title 		= self.get_argument("title", "")
		proDes 		= misaka.html( self.get_argument("proDes", "") )
		inputDes	= misaka.html( self.get_argument("inputDes", "") )
		outputDes	= misaka.html( self.get_argument("outputDes", "") )
		sapInput	= self.get_argument("sapInput", "")
		sapOutput	= self.get_argument("sapOutput", "")
		author		= self.get_argument("author", "")
		recommend	= misaka.html( self.get_argument("recommend", "") )
		testInput	= self.request.files["inputfile"][0]["body"]
		testOutput	= self.request.files["outputfile"][0]["body"]

		print testInput

		if timeLimit != "" and stars != "" \
		   and title != "" and proDes != "" \
		   and inputDes != "" and outputDes != "" \
		   and sapInput != "" and sapOutput != "" \
		   and author != "" \
		   and testInput != None and testOutput != None:

			print "Adding Problem:", \
				"\ntimeLimit:\n", timeLimit, \
				"\nstarts:\n", stars, \
				"\ntitle:\n", title, \
				"\nproDes:\n", proDes, \
				"\ninputDes:\n", inputDes, \
				"\noutputDes:\n", outputDes, \
				"\nsapInput:\n", sapInput, \
				"\nsapOutput:\n", sapOutput, \
				"\nauthor:\n", author, \
				"\nrecommend:\n", recommend, "\n"
		
			proID = self.application.problemCnt + 1001
			self.application.problemCnt += 1

			self.application.problemSet.addProblemItem(proID, title, stars, proDes,\
											   inputDes, outputDes, sapInput, sapOutput,\
											   recommend, author, timeLimit)

			dirName = "./judgefile/%s" % proID
			if os.path.exists(dirName) == False:
				os.makedirs(dirName)
			finput = open("%s/%s.in" % (dirName, proID), "w")
			foutput = open("%s/%s.out" % (dirName, proID), "w")
			finput.write(str(testInput))
			foutput.write(str(testOutput))
			print testOutput
			finput.close()
			foutput.close()


			self.render('addProblem.html', addOK=True)
			return

		self.render('addProblem.html', addOK=False)

	def get_current_user(self):
		return self.get_secure_cookie("username")


# ----- About Problem Index end ----- #

# ----- About Status ----- #

class StatusHandler(tornado.web.RequestHandler):
	def get(self):
		self.render('status.html', status=self.application.statusSet.getStatusSet())

# ----- About Status end ----- #


# ----- About Submit and Judge ----- #

class SubmitPageHandler(tornado.web.RequestHandler):
	@tornado.web.authenticated
	def get(self, proID):
		self.render('submit.html', proID=proID, user=self.get_secure_cookie("username"))

	def get_current_user(self):
		return self.get_secure_cookie("username")

class SubmitHandler(tornado.web.RequestHandler):
	@tornado.web.authenticated
	@tornado.web.asynchronous
	@tornado.gen.engine
	def post(self, proID):
		runID = self.application.nextRunID
		username = self.get_secure_cookie("username")
		self.application.nextRunID += 1
		
		dirName = "./usercode/%s/%s" % (username, proID)
		if os.path.exists(dirName) == False:
			os.makedirs(dirName)

		filName = "%s/%s%s" % (dirName, proID, runID)
		filSubmit = open("%s.cpp" % filName, "w")
		sourcefile = self.get_argument("source")
		filSubmit.write(sourcefile)
		filSubmit.close()

		self.application.statusSet.addStatus(runID, proID, "Queuing", "--", "--",\
									 len(sourcefile), "C++", username)

		self.redirect("/status")

		# Compile and Judge CE
		command = "g++ %s.cpp -o %s" % (filName, filName)
		#(status, output) = commands.getstatusoutput(command)

		client = tornado.httpclient.AsyncHTTPClient()
		response = yield tornado.gen.Task(client.fetch, 
						"http://localhost:8001/?" + urllib.urlencode({"command":command}))
		body = json.loads(response.body)
		
		status = body["status"]
		output = body["output"]

		print runID, "Compile Over"
		if status != 0:
			self.application.statusSet.setResult(runID, {"result":"CE"})
			return

		# Judge -- prepare

		compiledFile = "./usercode/%s/%s/%s%s" % (username, proID, proID, runID)
		judgeFilein  = "./judgefile/%s/%s.in" % (proID, proID)
		judgeFileout = "./judgefile/%s/%s.out" % (proID, proID)
		outputFile   = "./outputFiles/%s.out" % runID
		timeLimit    = self.application.problemSet.getProblem(int(proID))["timeLimit"]

		command = "./judge/judge %s %s %s %s" % \
								(compiledFile, judgeFilein, outputFile, timeLimit)

		
		response = yield tornado.gen.Task(client.fetch, 
						"http://localhost:8001/?" + urllib.urlencode({"command":command}))
		body = json.loads(response.body)
		status = body["status"]
		output = body["output"]

		print runID, status
		output = output.split()
		print runID, output

		# Judge -- judge

		if output[0] == "TLE":
			self.application.statusSet.setResult(runID, \
				{"result": "TLE", "time": int(output[1])/1000, "memory": int(output[2])/1000})
			return
		elif output[0] == "MLE":
			self.application.statusSet.setResult(runID, \
				{"result": "MLE", "time": int(output[1])/1000, "memory": int(output[2])/1000})
			return
		elif output[0] == "End":
			(statusd, outputd) = commands.getstatusoutput("diff %s %s" % (judgeFileout, outputFile))
			if outputd == "":
				self.application.statusSet.setResult(runID, \
					{"result": "AC", "time": int(output[1])/1000, "memory": int(output[2])/1000})
			else:
				(statusd, outputd) = commands.getstatusoutput("diff -i -b -B %s %s" % (judgeFileout, outputFile))
				if outputd == "":
					self.application.statusSet.setResult(runID, \
					{"result": "PE", "time": int(output[1])/1000, "memory": int(output[2])/1000})
				else:
					self.application.statusSet.setResult(runID, \
					{"result": "WA", "time": int(output[1])/1000, "memory": int(output[2])/1000})

			return
		else:
			self.application.statusSet.setResult(runID, \
				{"result": "System Error"})

	def get_current_user(self):
		return self.get_secure_cookie("username")

# ----- About Submit and Judge end ----- #

class Application(tornado.web.Application):
	def __init__(self):
		handlers = [(r'/', IndexHandler),
					(r'/user', UserHandler),
					(r'/user/status', UserStatucHandler),
					(r'/login', LoginHander),
					(r'/logout', LogoutHandler),
					(r'/regist', RegistHandler),
					(r'/problem', ProblemHandler),
					(r'/problem/(\w+)', ProblemItemHandler),
					(r'/addProblem', AddProbleItemHandler),
					(r'/submitPage/(\w+)', SubmitPageHandler),
					(r'/submit/(\w+)', SubmitHandler),
					(r'/status', StatusHandler),
					(r'.*', IndexHandler)]

		settings = dict(
			template_path=os.path.join(os.path.dirname(__file__), "templates"),
			static_path=os.path.join(os.path.dirname(__file__), "static"),
			cookie_secret="Y+ZazLgXS96QTpzL7O33/YICJS23NUEiq2EH0sc8bBI=",
			xsrf_cookies=True,
			login_url="/login",
			debug=True
		)

		self.problemSet = ProblemSet()
		self.problemCnt = len( self.problemSet.getProblemSet() )
		self.userSet = UserSet()
		self.statusSet = StatusSet()
		self.nextRunID = len( self.statusSet.getStatusSet() ) + 1

		tornado.web.Application.__init__(self, handlers, **settings)

if __name__ == '__main__':
	tornado.options.parse_command_line()
	http_server = tornado.httpserver.HTTPServer(Application())
	http_server.listen(options.port)
	tornado.ioloop.IOLoop.instance().start()