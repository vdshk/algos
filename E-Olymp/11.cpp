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
    int m, n, k;
    cin >> m >> n >> k;
    cout << int(m / n) << ".";
    for (int i = 0; i < k; ++i) {
        m = (m - (m / n) * n) * 10;
        cout << int(m / n);
    }
}