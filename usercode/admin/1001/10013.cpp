#include <iostream>
#include <fstream>
#include <cstring>
#include <stack>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <set>

#define GZCC 1000
#define NOTIMEREQ -1
#define HALF_R 10
#define BUFF_SIZE 8192
#define MAXONEVIS 500

#define TUIHUO_T		0.5
#define TUIHUO_T_MIN	0.25
#define TUIHUO_R		0.9

using namespace std;

struct Order
{
	double posX, posY;
	int orderID;
	int timeStartRequire;
	char orderTimeLen;
	
	bool operator < (const Order &rhs) const
	{
		if(timeStartRequire == -1 && rhs.timeStartRequire == -1)
		{
			return orderID < rhs.orderID;
		}
		else if(timeStartRequire == -1)
		{
			return 540.5 < rhs.timeStartRequire;
		}
		else if(rhs.timeStartRequire == -1)
		{
			return timeStartRequire < 540.5;
		}
		
		if(timeStartRequire < rhs.timeStartRequire)
			return true;
		else if(timeStartRequire > rhs.timeStartRequire)
			return false;
		else if(orderID < rhs.orderID)
			return true;
		else
			return false;
	}
};

set<Order> orders;
stack<int> hourIDs;
set<Order> sorders[GZCC*2][GZCC*2];
double maxXY = -1;
int gzLen;
int lastWorkIndex = -1;

void addOrder2vorders(const Order &order)
{
	int indexX = order.posX/gzLen;
	int indexY = order.posY/gzLen;
	sorders[ indexX ][ indexY ].insert(order);
}

bool getHourID(int &ID)
{
	if(hourIDs.empty())
		return false;
	
	ID = hourIDs.top();
	hourIDs.pop();
	return true;
}

struct Dir
{
	int dx;
	int dy;
};

vector<Dir> dirs;

bool DirSort(const Dir &a, const Dir &b)
{
	return a.dx*a.dx+a.dy*a.dy < b.dx*b.dx+b.dy*b.dy;
}

int main(int argc, const char *argv[])
{
    if(argc != 3)
    {
        cout << "usage: ./XX in.dat out.dat" << endl;
        return 0;
    }

    srand((unsigned)time(NULL));
	clock_t start_t = clock();
	ifstream fin(argv[1], ios::binary);
	int recordLen, dingdan = 0, ren = 0, wsjdingdan = 0;
	long long total = 0;
	char buff[BUFF_SIZE];
	double rate;

	int hourID;
	
	int orderID, timeStartRequire;
	double posX, posY;
	char orderTimeLen, hasTimeStartRequire;

	while( fin.read((char*)(&recordLen), 4) )
	{
		total += recordLen;
		
		if(recordLen == 15)
		{
			ren++;
			
			fin.read(buff, 1);
			fin.read( (char *)(&hourID), 4);
			hourIDs.push(hourID);
			fin.read(buff, 6);
		}
		else
		{
			dingdan++;
			fin.read(buff, 1);
			fin.read((char *)(&orderID), 4);
			fin.read((char *)(&posX), 8);
			fin.read((char *)(&posY), 8);
			fin.read((char *)(&orderTimeLen), 1);
			fin.read((char *)(&hasTimeStartRequire), 1);
			
			maxXY = maxXY > posX ? maxXY : posX;
			maxXY = maxXY > posY ? maxXY : posY;
			
			int recordLenLeft = recordLen - 4 - 1 - 4 - 8 - 8 - 1 - 1;
			if(hasTimeStartRequire == 1)
			{
				recordLenLeft -= 4;
				fin.read((char *)(&timeStartRequire), 4);
				
				Order order = {posX, posY, orderID, timeStartRequire, orderTimeLen};
				orders.insert(order);
				//cout << orders.size() << endl;
			}
			else
			{
                wsjdingdan++;
				Order order = {posX, posY, orderID, NOTIMEREQ, orderTimeLen};
				orders.insert(order);
				//cout << orders.size() << endl;
			}
			
			while(recordLenLeft > BUFF_SIZE)
			{
				fin.read(buff, BUFF_SIZE);
				recordLenLeft -= BUFF_SIZE;
			}
			fin.read(buff, recordLenLeft);
		}
	}
	
	cout << "Read Data Over: " << dingdan << "\t" << ren << "\ttotalreadbytes: " << total << endl;
	
	clock_t end_t = clock();
	cout << "Time: " << (end_t - start_t)*1.0/CLOCKS_PER_SEC << endl;
	
    rate = wsjdingdan*1.0/dingdan;
    cout << "NOREQ / TOTAL: " << rate << endl;
	gzLen = (maxXY / GZCC);
	if(gzLen == 0) gzLen = 1; 
	cout << "Gezi Len: " << gzLen << endl;
	
	for(int i = -HALF_R; i <= HALF_R; i++)
		for(int j = -HALF_R; j <= HALF_R; j++)
			if(i*i + j*j <= HALF_R*HALF_R) 
				dirs.push_back((Dir){i, j});
	sort(dirs.begin(), dirs.end(), DirSort);
	cout << "Init Dir Over!!!\tHALF_R: " << HALF_R << endl;
	
	ofstream fout(argv[2]);
	fout.setf(ios::fixed);
    fout << setprecision(3);

	cout << "Start Calc..." << endl;
	
	for(set<Order>::iterator iter = orders.begin(); iter != orders.end(); iter++)
	{
		addOrder2vorders(*iter);
		//cout << (int)(*iter).orderTimeLen << endl;
	}
	
	int orderLen = orders.size(), nowIndex, hourT; 
	long long totalworktime = 0, totalren = 0;
	double hourX, hourY;
	
	while(getHourID(hourID))
	{
		totalren ++;
        //cout << totalren << endl;
		// work
		Order thisOrder = *( orders.begin() );
		
		hourX = thisOrder.posX;
		hourY = thisOrder.posY;
		if(thisOrder.timeStartRequire == NOTIMEREQ){
			hourT = 540 + thisOrder.orderTimeLen*60;
			fout << hourID << "\t" << thisOrder.orderID << "\t"
				 << thisOrder.posX << "\t"
				 << thisOrder.posY << "\t"
				 << (int)thisOrder.orderTimeLen << "\t"
				 << 0 << "\t"
				 << 540 << endl;
		}else{
			hourT = thisOrder.timeStartRequire + thisOrder.orderTimeLen*60;
			fout << hourID << "\t" << thisOrder.orderID << "\t"
				 << thisOrder.posX << "\t"
				 << thisOrder.posY << "\t"
				 << (int)thisOrder.orderTimeLen << "\t"
				 << 1 << "\t"
				 << thisOrder.timeStartRequire << "\t"
				 << thisOrder.timeStartRequire << endl;
		}
		totalworktime += thisOrder.orderTimeLen;
		orders.erase(thisOrder);
		sorders[ (int)(thisOrder.posX/gzLen) ][ (int)(thisOrder.posY/gzLen) ].erase(thisOrder);
		cout << thisOrder.timeStartRequire << endl;
		// tuihuo 
		double T = TUIHUO_T;
		while(true)
		{
			int startT = 3000;
            int transT;
            int hasVisCnt = 0;
            set<Order>::iterator iterF = orders.end();
            
            
            
			for(int i = 0; i < dirs.size(); i++)
			{
				int X = hourX/gzLen + dirs[i].dx;
				int Y = hourY/gzLen + dirs[i].dy;
                if(X < 0 || Y < 0 || X >= GZCC*2 || Y >= GZCC*2)
					continue;
				
				Order tmp = {0, 0, 0, hourT, 0};
				set<Order>::iterator iter = sorders[X][Y].begin();
	
                //cout << "rrr11  " << clock() << endl;
                /*if(iter != sorders[X][Y].end() || ((double)rand()/RAND_MAX) > rate)
                {
                    //cout << "rrr22  " << clock() << endl;
                    iter = sorders[X][Y].lower_bound(tmp);// lower_bound(sorders[X][Y].begin(), sorders[X][Y].end(), tmp);            
                    //cout << "rrr222 " << clock() << endl;
                    if(iter == sorders[X][Y].end())
                        iter = sorders[X][Y].begin();
                }*/
				for(; iter != sorders[X][Y].end(); iter++)
				{
                        hasVisCnt++;
                       // cout << "rrr33  " << clock() << endl;
                        if(startT == hourT || (iterF != orders.end() && hasVisCnt > MAXONEVIS) || hourT > 1080)
                            break;
                        if((*iter).timeStartRequire != -1 && hourT > (*iter).timeStartRequire)
                            iter = sorders[X][Y].lower_bound(tmp);//(sorders[X][Y].begin(), sorders[X][Y].end(), tmp);

                        if(iter == sorders[X][Y].end())
                            break;
                        //cout << "rrr44  " << clock() << endl;
                        //cout << totalren << " " << hourID << " " << hourT << " " << (*iter).timeStartRequire << " " << hasVisCnt << " " << X << " " << Y << endl;

						transT = 60 * sqrt( 
								((*iter).posX - hourX)*((*iter).posX - hourX) +
								((*iter).posY - hourY)*((*iter).posY - hourY) ) / 10.0;
						if(transT < 5)
							transT = 0;
							
						if( (*iter).timeStartRequire == NOTIMEREQ )
						{
							if(hourT + transT + (*iter).orderTimeLen*60 > 1140)
								continue;
							
							if(startT > hourT + transT)
							{
								startT = hourT + transT;
								iterF = iter;

							}
						}
						else
						{
							if(hourT+transT > (*iter).timeStartRequire)
								continue;
							
							if(startT > (*iter).timeStartRequire)
							{
								startT = (*iter).timeStartRequire;
								iterF = iter;
							}
							else if(startT < (*iter).timeStartRequire && startT != 3000 && T > TUIHUO_T_MIN)	// tuihuo
							{
								double dE = startT - (*iter).timeStartRequire;
								double rad = ((double)rand()/RAND_MAX);
								if( exp(dE/T) > rad && dE >= -120)
								{
									startT = (*iter).timeStartRequire;
									iterF = iter;
									T = TUIHUO_R * T;
									//cout << "tuihuo succ :  " << dE << "\t" << exp(dE/T) << "\t" << rad << endl;
									goto tuihuo;
								}
							}
						}
				}
                if(startT == hourT || (iterF != orders.end() && hasVisCnt > MAXONEVIS) || hourT > 1080)
                    break;
			}
			tuihuo:
			if(iterF == orders.end())
				break;
			else
			{
				thisOrder = *iterF;
				hourX = thisOrder.posX;
				hourY = thisOrder.posY;
				hourT = startT + thisOrder.orderTimeLen*60;
				
				if(thisOrder.timeStartRequire == NOTIMEREQ)
				{
				
					fout << hourID << "\t" << thisOrder.orderID << "\t"
				 		 << thisOrder.posX << "\t"
				 		 << thisOrder.posY << "\t"
				 		 << (int)thisOrder.orderTimeLen << "\t"
				 		 << 0 << "\t"
				 		 << startT << endl;
				}
				else
				{
					fout << hourID << "\t" << thisOrder.orderID << "\t"
						 << thisOrder.posX << "\t"
						 << thisOrder.posY << "\t"
						 << (int)thisOrder.orderTimeLen << "\t"
						 << 1 << "\t"
						 << thisOrder.timeStartRequire << "\t"
						 << startT << endl;
				}
				
				totalworktime += thisOrder.orderTimeLen;
				orders.erase(thisOrder);
				sorders[ (int)(thisOrder.posX/gzLen) ][ (int)(thisOrder.posY/gzLen) ].erase(thisOrder);
			}
		
		}
		// work end
		//cout << hourID << " " << totalworktime << endl;

	}
    clock_t end_c = clock();
    cout << "Calc & Write Out Cost Time: " << (end_c - end_t)/CLOCKS_PER_SEC << endl;
	cout << "Use Worker: " << totalren << "\t" << totalworktime / (double)totalren << "\nTotal Worker: " << ren << "\t" << totalworktime / (double)ren << endl; 
}