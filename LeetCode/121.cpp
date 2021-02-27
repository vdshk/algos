#include <bits/stdc++.h>
 
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define len(a) (int)a.size()
 
using namespace std;
 
typedef vector<int> vint;
typedef long double ld;
typedef long long ll;
typedef string str;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = len(prices);
        int minimum = prices[0];
        int ans = 0;
        
        for (auto &x : prices) {
            minimum = min(minimum, x);
            ans = max(ans, x - minimum);
        }

        return ans;
    }
};