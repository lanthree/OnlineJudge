import pymongo
from pymongo import MongoClient

client = MongoClient('localhost', 27017)
db = client["OnlineJudge"]

print "collection_names:\n", db.collection_names()

proshort = db["ProblemShort"]
prolong = db["ProblemLong"]
proratio = db["ProblemRatio"]
prostatus = db["ProblemStatus"]

print proshort.count(), prolong.count(), proratio.count(), prostatus.count()


#for i in range(1001, 1000+proshort.count()+1):
#	print proshort.find_one_and_delete({"id":i})

#for i in range(1001, 1000+prolong.count()+1):
#	print prolong.find_one_and_delete({"id":i})

#for i in range(1001, 1000+proratio.count()+1):
#	print proratio.find_one_and_delete({"id":i})

#for i in range(1, prostatus.count()+1):
#	print prostatus.find_one_and_delete({"runID":i})

#len = proshort.count()
#print "problems:\n", len

#for proID in range(1000+1, 1000+len+1):
#	print "cleaning: ", proID
#	proshort.find_one_and_delete({"id":proID})
#	prolong.find_one_and_delete({"id":proID})
#	proratio.find_one_and_delete({"id":proID})