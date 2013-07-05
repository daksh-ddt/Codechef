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
/*
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
*/
#define S(a) scanf("%d",&(a))
#define P(a) printf("%d",(a))
#define NL printf("\n") 
#define sqr(a) ((a)*(a))
#define SL(a) scanf("%lld",&(a))
#define PL(a) printf("%lld",(a))
#define ll long long int
#define FOR(I,A,B) for(int I= (A); I<(B); ++I)
#define stop system("pause")
using namespace std;

int a[1010];
int b[1010];
int ct[1010];

int main(){
    int t;
    S(t);
    while(t--){
        int n;
        S(n);
        int k;
        FOR(i,0,1005){
            b[i]=0;
            a[i]=0;
            ct[i]=0;
        }
        FOR(i,1,n+1){
            S(k);
            a[k]++;
        }
        FOR(i,1,n+1){
            S(k);
            b[k]++;
        }
        FOR(i,1,1005){
                ct[i]=ct[i-1]+a[i]-b[i];
        }
        
        int max=-1000;
        FOR(i,0,1005){
            if(max<ct[i])
                max=ct[i];
        }
        /*FOR(i,1,10){
            P(ct[i]);
            NL;
        }
        cout<<"ans";
        */
        P(max);
        NL;
    }
    //stop;
    return 0;
}
                
        
        

