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
#define ll unsigned long long int
#define FOR(I,A,B) for(int I= (A); I<(B); ++I)
#define stop system("pause")

//int ct[1000005];
using namespace std;

int main(){
    int n;
    int f;
        int s;
        int cont=0;
        int t;
        int ans;
    while(1){
        cont=0;
        S(n);
        if(n==0)
            break;
        int a[n];
        FOR(i,0,n){
            a[i]=inp();
        }

        sort(a,a+n);
        //lets go with the brute force
        
        
        for(int i=0;i<=n-3;i++){
            f=i;
            for(s=f+1;s<=n-2;s++){
                int l=s+1;
                int r=n-1;
                ans=n;
                while(l<=r){
                    t=(l+r)>>1;
                    if(a[t]>(a[f]+a[s])){
                        ans=t;
                        r=t-1;
                    }
                    else
                        l=t+1;
                }
                cont+=n-ans;
            }
        }
        P(cont);
        NL;
    }
    //stop;
    return 0;
}
        
   

