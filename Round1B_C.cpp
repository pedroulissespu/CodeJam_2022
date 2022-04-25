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

string auxiliar(int a){
    string ret="";
    for(int i=0; i<8-a; ++i){
        ret+="0";
    }
    for(int i=8-a; i<8; ++i){
        ret+="1";
    }
    return ret;
}



void solve(int a)
{
    int b = 0;
    bool flag = false;
    while(a--){
    cout << "00000000" << endl;
        cin >> b;
        while(1){
            string str=auxiliar(b);
            cout << str.c_str() << endl;
            fflush(stdout);
            cin >> b;
            if(b==0) break;
            if(b==-1){
                flag=true;
                break;
            }
        }   
        if(flag) break;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    solve(num);
    return 0;
}