#include <iostream> 
#include <cstring>
#include <fstream>

using namespace std;
const int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int n,times[8],date,year,month,i;
int leap(int year)
{
    if (year %4 ==0 && year %100 !=0 || year %400 ==0)
		return 1;
    else return 0;
}
int main()
{
    //freopen("friday.in","r",stdin);
    //freopen("friday.out","w",stdout);
    while(cin>>n)
    {
	    memset(times,0,sizeof(times));
	    times[0]=1;
		for(year=1900;year<1900+n;year++)
			for(month=1;month<=12;month++)
			{
				date=5+times[0];
				if(date>7) 
					date-=7;
				times[date]++;
				if(leap(year) && month==2)
					times[0]++;
				else
					times[0]+=day[month-1]%7;
				if(times[0]>7)
					times[0]-=7;
			}
		cout<<times[6]<<' '<<times[7];
		for(i=1;i<=5;i++)
			cout<<' '<<times[i];
		cout<<endl;
	}
	return 0;
}