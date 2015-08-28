#pragma warning(disable:4786)
#include <iostream> 
#include <cstring>
#include<string>
#include<map>
#include<fstream>

using namespace std;
int main()
{
	//freopen("gift1.in","r",stdin);
	//freopen("gift1.out","w",stdout);
	map<string,int> G;
	int i,n,sum,num,j;
	string name[11],NI,NT;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			cin>>name[i];
			G[name[i]]=0;
		}
		for(i=1;i<=n;i++)
		{
			cin>>NI;
			cin>>sum>>num;
			G[NI]-=sum;
			if(num!=0)
				G[NI]+=sum-(sum/num)*num;
			for(j=1;j<=num;j++)
			{
				cin>>NT;
				G[NT]+=sum/num;
			}
		}
		for(i=1;i<=n;i++)
			cout<<name[i]<<" "<<G[name[i]]<<endl;
	}
	return 0;
}