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

using namespace std;
vector<int> chef;
vector<int> assist;
int main(){
    int test;
    S(test);
    while(test--){
        int n,m;
        S(n);
        S(m);
        int jobs[n+1];
        FOR(i,0,n+1){
            jobs[i]=0;
        }
        int done;
        FOR(i,0,m){
            S(done);
            jobs[done]=1;
        }
        chef.clear();
        assist.clear();
        int flag=1;
        FOR(i,1,n+1){
            if(!jobs[i]){
                if(flag&1){
                    chef.push_back(i);
                    flag++;
                }
                else{
                    assist.push_back(i);
                    flag++;
                }
            }
        }
        FOR(i,0,chef.size()){
            printf("%d ",chef[i]);
        }
        NL;
        FOR(i,0,assist.size()){
            printf("%d ",assist[i]);
        }
        NL;
    }
    //system("pause");
    return 0;
}
            

