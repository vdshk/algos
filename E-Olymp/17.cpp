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

unsigned long long dp[51][3];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    dp[1][0] = dp[1][1] = dp[1][2] = 1;
    dp[2][0] = dp[2][1] = dp[2][2] = 2;
    for (int i = 3; i <= n; ++i) {
        dp[i][0] = dp[i - 1][1] + dp[i - 1][2];
        dp[i][1] = dp[i - 1][2] + dp[i - 1][0];
        dp[i][2] = dp[i - 1][0] + dp[i - 1][1];
    }
    unsigned long long ans = dp[n][0] + dp[n][1] + dp[n][2];
    cout << ans;
}