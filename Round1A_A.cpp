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

string solve(string res)
{
    string s;
    cin >> s;
    string v;
    v.push_back(s[0]);
    int i = 0;
    while (i + 1 < s.size()) {
        char cur = v.back();
        char next = s[i + 1];
        int diff = (int)next - (int)cur;
        if (diff > 0) 
        {
            v.push_back(cur);
            v.push_back(next);
        } 
        else if (diff < 0) 
        {
            v.push_back(next);
        } 
        else 
        {
            string h;
            h.push_back(cur);
            h += s.substr(i + 1);
            string g = s.substr(i + 1);
            if (h.compare(g) <= 0) 
            {
                v.push_back(cur);
                v.push_back(next);
            } 
            else 
            {
                v.push_back(next);
            }
        }
        ++i;
    }
    res = v.c_str();
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    string res;
    cin >> num;
    for(int i = 0 ; i < num; i++)
    {
        cout << "Case #" << i+1 << ": " << solve(res) << endl;
    }
    return 0;
}