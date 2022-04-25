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

void solve(int a)
{
    int N; cin>>N;
    deque<int> d;
    for(int i=0; i<N; ++i){ int a; cin >> a; d.push_back(a);}
    int prv=-1;
    int res=0;
    while(!d.empty()){
        if(d.size()==1)
        {
            if(d.back()>=prv) res++;
            d.pop_back();
        }
        else
        {
                if(d.front()>d.back())
                {
                    if(d.back()>=prv) 
                    {
                        res++;
                        prv=d.back();
                    }
                    d.pop_back();
                }
                else
                {
                    if(d.front()>=prv) {
                        res++;
                        prv=d.front();
                    }
                    d.pop_front();
                }
            }
        }

    cout << "Case #"<<a+1<<": "<< res << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    for(int i = 0 ; i < num; i++)
    {
        solve(i);
    }
    return 0;
}