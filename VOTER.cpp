/* Come on Code on!!!!
re_hash
dev_cpp
*/
 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <ctime>
#include <cassert>
#include <climits>
#include <limits>
using namespace std;
 
inline int inp()
    {
    int noRead=0;
    char p=getchar_unlocked();
    for(;p<33;){p=getchar_unlocked();};
    while(p>32)
    {
    noRead = (noRead << 3) + (noRead << 1) + (p - '0');
    p=getchar_unlocked();
    }
    return noRead;
    };
    
#define S(a) scanf("%d",&(a))
#define P(a) printf("%d",(a))
#define NL printf("\n") 
#define sqr(a) ((a)*(a))
#define SL(a) scanf("%lld",&(a))
#define PL(a) printf("%lld",(a))
#define ll long long int
#define FOR(I,A,B) for(int I= (A); I<(B); ++I)

using namespace std;
map<int,int> ar;
int main(){
    int a,b,c;
    a=inp();
    b=inp();
    c=inp();
    int t;
    int size=0;
    FOR(i,0,a+b+c){
        t=inp();
        ar[t]++;
    }
    map<int,int>::iterator it;
    vector<int> ans;
    for(it=ar.begin();it!=ar.end();it++){
        if(it->second >=2){
            size++;
            ans.push_back(it->first);
        }
    }
    P(size);
    NL;
    FOR(i,0,ans.size()){
            printf("%d\n",ans[i]);
       
    }
    //system("pause");
    return 0;
}

