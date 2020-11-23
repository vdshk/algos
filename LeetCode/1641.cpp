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
    int countVowelStrings(int n) {
        auto dp = vector < vector < int >> (n + 1, vector<int>(5, 0));
        dp[1][0] = dp[1][1] = dp[1][2] = dp[1][3] = dp[1][4] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
            dp[i][2] = dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2];
            dp[i][3] = dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3];
            dp[i][4] = dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4];
        }
        return dp[n][0] + dp[n][1] + dp[n][2] + dp[n][3] + dp[n][4];
    }
};