#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/resource.h>

/*
1 compiledfile
2 judgeFile.in
3 outputfile
4 timeLimit ---> *1000
# memory == 65536
*/

int main(int argc, char ** argv)
{
	if(argc != 5){
		printf("argv error\n");
		return 0;
	}

	struct rlimit rl;
	rl.rlim_cur = rl.rlim_max = 4;  // 10 seconds
	setrlimit(RLIMIT_CPU, &rl);

	pid_t pid;
	if( (pid = fork()) < 0 ){
		printf("ERROR: fork error\n");
		return 0;
	}else if(pid == 0){
		freopen(argv[2], "r", stdin);
		freopen(argv[3], "w", stdout);
		execlp(argv[1], argv[1], (char *)0);
		exit(0);
	}

	int status;
	if( (pid = waitpid(pid, &status, 0)) < 0 ){
		printf("ERROR: waitpid error\n");
		return 0;
	}

	struct rusage childUsage;
	getrusage(RUSAGE_CHILDREN, &childUsage);

	long timeUsed = childUsage.ru_utime.tv_usec + childUsage.ru_utime.tv_sec*1000000
				  + childUsage.ru_stime.tv_usec + childUsage.ru_stime.tv_sec*1000000;
	long memoryUsed = childUsage.ru_maxrss;

	long timeLimit = atoi(argv[4])*1000;
	if(timeUsed > timeLimit){
		printf("TLE %ld %ld\n", timeUsed, memoryUsed);
		return 0;
	}

	long memoryLimit = 65536000;
	if(memoryUsed > memoryLimit){
		printf("MLE %ld %ld\n", timeUsed, memoryUsed);
		return 0;
	}

	printf("End %ld %ld\n", timeUsed, memoryUsed);
	return 0;
}


