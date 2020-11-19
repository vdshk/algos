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
    int n;
    cin >> n;
    switch (n) {
        case 1:
            return cout << "10 0", 0;
        case 2:
            return cout << "1 22", 0;
        case 3:
            return cout << "6 123", 0;
        case 4:
            return cout << "12 1124", 0;
        case 5:
            return cout << "40 11125", 0;
        case 6:
            return cout << "30 111126", 0;
        case 7:
            return cout << "84 1111127", 0;
        case 8:
            return cout << "224 11111128", 0;
        case 9:
            return cout << "144 111111129", 0;
    }
}