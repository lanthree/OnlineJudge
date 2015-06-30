import commands

compiledFile = "../usercode/admin/1001/10011"
judgeFilein = "../judgefile/1001/1001.in"
outputfile = "./10011.out"
timeLimit = 1000

(status, output) = commands.getstatusoutput("../judge/t.out %s %s %s %s" %(compiledFile, judgeFilein, outputfile, timeLimit))
print status
print output


