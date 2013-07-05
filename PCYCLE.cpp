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

using namespace std;

int a[1005];
int COUNT[1005];

int main(){
    int total=0;
    int n;
    S(n);
    FOR(i,1,n+1){
        S(a[i]);
    }
    vector<int> arr[1000];
    int veC=0;
    FOR(start,1,n+1){
        if(COUNT[start]==0){
            total++;
            arr[veC].push_back(start);
            COUNT[start]=1;
            int temp=a[start];
            COUNT[temp]=1;
            while(temp!=start){
                arr[veC].push_back(temp);
                temp=a[temp];
                COUNT[temp]=1;
            }
            arr[veC].push_back(start);
            veC++;
        }
    }
    P(veC);
    NL;
    FOR(i,0,veC){
        FOR(j,0,arr[i].size()){
            printf("%d ",arr[i][j]);
        }
        NL;
    }
    //system("pause");
    return 0;
}

