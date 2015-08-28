# coding=utf-8
from xml.dom import minidom
from pymongo import MongoClient
import os
import sys  
reload(sys)  
sys.setdefaultencoding('utf-8')  

client = MongoClient('localhost', 27017)

db = client["OnlineJudge"]

proshort = db["ProblemShort"]
prolong  = db["ProblemLong"]
proratio = db["ProblemRatio"]
prostatus= db["ProblemStatus"]

cnt = proshort.count()

doc 	= minidom.parse("fps-USACO-1058-1154.xml")
root	= doc.documentElement
print root.tagName
items 	= root.getElementsByTagName("item")
for item in items:
	title 		= item.getElementsByTagName("title")[0].childNodes[0].nodeValue
	timeLimit	= (int)(item.getElementsByTagName("time_limit")[0].childNodes[0].nodeValue)*1000
	stars	= 2
	proDes	= item.getElementsByTagName("description")[0].childNodes[0].nodeValue.replace("\r", "<br/>")
	inputDes	= item.getElementsByTagName("input")[0].childNodes[0].nodeValue.replace("\r", "<br/>")
	outputDes	= item.getElementsByTagName("output")[0].childNodes[0].nodeValue.replace("\r", "<br/>")
	sapInput	= item.getElementsByTagName("sample_input")[0].childNodes[0].nodeValue.replace("\r", "<br/>")
	sapOutput	= item.getElementsByTagName("sample_output")[0].childNodes[0].nodeValue.replace("\r", "<br/>")

	testInput = ""
	test_inputs = item.getElementsByTagName("test_input")
	for test_input in test_inputs:
		testInput += test_input.childNodes[0].nodeValue

	testOutput = ""
	test_outputs = item.getElementsByTagName("test_output")
	for test_output in test_outputs:
		testOutput += test_output.childNodes[0].nodeValue

	author = "USACO"
	recommend = ""
	

	print cnt+1001, "\t", title

	proID = cnt + 1001
	cnt = cnt+1

	dirName = "../judgefile/%s" % proID
	if os.path.exists(dirName) == False:
		os.makedirs(dirName)
	finput = open("%s/%s.in" % (dirName, proID), "w")
	foutput = open("%s/%s.out" % (dirName, proID), "w")
	finput.write(str(testInput))
	foutput.write(str(testOutput))
	finput.close()
	foutput.close()

	itemshort = {"id":proID, "title":title, "hard":stars}
	itemlong = {"id":proID, "proDes":proDes, "inputDes":inputDes, "outputDes":outputDes, "sapInput":sapInput, "sapOutput":sapOutput, "author":author, "recommend":recommend, "timeLimit":timeLimit}
	proshort.insert(itemshort)
	prolong.insert(itemlong)
	proratio.insert({"id":proID, "accepted":0, "submissions":0})

