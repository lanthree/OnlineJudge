import os

proID = 1001
testInput = "1 3"
testOutput = "4\n"

dirName = "./judgefile/%s" % proID
if os.path.exists(dirName) == False:
	os.makedirs(dirName)
	finput = open(("%s/%s.in" % (dirName, proID)), "w")
	foutput = open(("%s/%s.out" % (dirName, proID)), "w")
	finput.write(testInput)
	foutput.write(testOutput)
	finput.close()
	foutput.close()