#include <iostream>
#include <cstring>
using namespace std;

#include <unistd.h>
#include <sys/wait.h>
#include <sys/resource.h>

char str[1000000];

int main()
{
	memset(str, 0, sizeof str);
	cout << "HELLO WORLD" << endl;

	struct rlimit rl;
	getrlimit(RLIMIT_CPU, &rl);
	cout << "child :  RLIMIT_CPU:  " <<rl.rlim_cur << " " << rl.rlim_max << endl;
	
	while(true);

	exit(0);
}