#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
 
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
#define MOD 1000000007
#define LSB(i) ((i) & -(i))
#define int long long int
 
using namespace std;

int aux[1001][2] = {0,};
void aque() {
    for(int i=0; i<1001; ++i){
        aux[i][0]=0;
        aux[i][1]=0;
    }
}

void solve(int a)
{
        aque();
        int N, P; cin>>N>>P;
        vector<pair<int, int> > cache;
        for(int i=0; i<N; ++i){
            int Min=0, Max=0;
            for(int j=0; j<P; ++j){
                int a; cin>>a;
                if(j==0) {
                    Min=a;
                    Max=a;
                }
                else{
                    Min=min(Min,a);
                    Max=max(Max,a);
                }
            }
            cache.push_back({Min,Max});
        }
        int prv0=cache[0].second, prv1=cache[0].first;
        aux[0][0]=cache[0].second;
        aux[0][1]=cache[0].second*2-cache[0].first;
        for(int i=1; i<N; ++i){
            int a=aux[i-1][1]+abs(prv1-cache[i].second)+cache[i].second-cache[i].first;
            int b=aux[i-1][0]+abs(prv0-cache[i].second)+cache[i].second-cache[i].first;
            aux[i][1]=min(a,b);
            int c=aux[i-1][0]+abs(prv0-cache[i].first)+cache[i].second-cache[i].first;
            int d=aux[i-1][1]+abs(prv1-cache[i].first)+cache[i].second-cache[i].first;
            aux[i][0]=min(c,d);
            prv0=cache[i].second;
            prv1=cache[i].first;
        }
    cout << "Case #"<<a+1<<": "<< min(aux[N-1][0], aux[N-1][1]) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    for(int i = 0 ; i < num; i++) solve(i);
    return 0;
}