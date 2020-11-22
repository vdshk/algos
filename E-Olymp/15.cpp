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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> dp[n - i + 1][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string ans = "";
    int cur_i = n, cur_j = m;
    while (cur_i != 1 && cur_j != 1) {
        if (dp[cur_i - 1][cur_j] > dp[cur_i][cur_j - 1]) {
            ans = "F" + ans;
            --cur_i;
        } else {
            ans = "R" + ans;
            --cur_j;
        }
    }
    while (cur_i != 1) {
        ans = "F" + ans;
        --cur_i;
    }
    while (cur_j != 1) {
        ans = "R" + ans;
        --cur_j;
    }
    cout << ans;
}