#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	freopen("output.txt", "w", stdout);
	cout << "Hello World" << endl;

	freopen("/dev/tty", "w", stdout);
	//ofstream fout("output.txt");
	//streambuf * coutBackUp = cout.rdbuf(fout.rdbuf());
	printf("asdasdasdasd\n");
}