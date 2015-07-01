#include <iostream>
#include <utility>
#include <set>

using namespace std;

template <class _A, class _B, class _Compare=less<_A> >
class MMap : public set < pair< _A, _B >, _Compare >
{
        public :
                MMap():set< pair< _A, _B >, _Compare >(){};
                ~MMap(){};
};

template< typename InPair >
struct MMapComp{
        bool operator() (InPair a , InPair b){
                if( a.first == b.first ) return a.second > b.second;
                else
                        return a.first < b.first;
        }
};

int main(int argc, char ** argv)
{
        MMap<char,int,MMapComp< pair<char , int > > > test;

        test.insert(make_pair('D',1));
        test.insert(make_pair('D',2));
        test.insert(make_pair('B',3));
        test.insert(make_pair('A',4));

        for( MMap<char,int >::iterator it = test.begin(); it != test.end(); it++ )
                cout << (*it).first << "\t" << (*it).second << endl;
        return 0;
}