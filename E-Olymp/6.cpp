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

int dp[1 << 15][31];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <pair<int, int>> vouchers(n);
    for (auto &x : vouchers) {
        cin >> x.first >> x.second;
    }
    for (int i = 0; i < n; ++i) {
        dp[1 << i][0] = vouchers[i].first * vouchers[i].second;
    }
    for (int i = 1; i < n; ++i) {
        for (int mask = 0; mask < (1 << n); ++mask) {
            if (__builtin_popcount(mask) == i + 1) {
                for (int j = 0; j < n; ++j) {
                    if ((mask >> j) & 1) {
                        int cur = max(0, vouchers[j].first - i) * vouchers[j].second;
                        dp[mask][i] = max(dp[mask][i], dp[mask ^ (1 << j)][i - 1] + cur);
                    }
                }
            }
        }
    }
    cout << dp[(1 << n) - 1][n - 1];
}