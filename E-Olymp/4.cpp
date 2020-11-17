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

    double x1, y1, r1;
    double x2, y2, r2;

    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        return cout << -1, 0;
    }

    x2 -= x1, y2 -= y1;
    x1 = 0, y1 = 0;

    double len = hypot(x2, y2);
    if (len < r1) {
        if (len + r2 < r1) {
            cout << 0;
        } else if (len + r2 == r1) {
            cout << 1;
        } else if (len + r2 > r1) {
            cout << 2;
        }
    } else if (len == r1) {
        if (r2 == 0) {
            cout << 1;
        } else {
            cout << 2;
        }
    } else if (len > r1) {
        if (len > r1 + r2) {
            cout << 0;
        } else if (len == r1 + r2) {
            cout << 1;
        } else if (len < r1 + r2) {
            cout << 2;
        }
    }
}