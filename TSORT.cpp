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
 
#define S(a) scanf("%d",&(a))
#define P(a) printf("%d",(a))
#define NL printf("\n") 
#define sqr(a) ((a)*(a))
#define SL(a) scanf("%lld",&(a))
#define PL(a) printf("%lld",(a))
#define ll long long int
#define FOR(I,A,B) for(int I= (A); I<(B); ++I)
int a[1000005];
int main(){
    int t,n;
    S(t);
    while(t--){
        S(n);
        a[n]++;
    }
    FOR(i,0,1000002){
        while(a[i]){
            printf("%d\n",i);
            a[i]--;
        }
    }
    //system("pause");
    return 0;
}
        

