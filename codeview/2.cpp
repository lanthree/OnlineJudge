#include <iostream> 
#include <cstring>

#include<fstream>
using namespace std;
int main()
{
	char HX[7],TT[7];
	int i,AS1,AS2;
	while(scanf("%s",&HX)!=EOF)
	{
		scanf("%s",&TT);
		AS1=1;
		AS2=1;
		for(i=0;i<strlen(HX);i++)
			AS1*=(HX[i]-'A'+1);
		for(i=0;i<strlen(TT);i++)
			AS2*=(TT[i]-'A'+1);
		if(AS1 % 47 == AS2 % 47) printf("GO\n");
		else printf("STAY\n");
	}
	return 0;
}