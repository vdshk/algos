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
    vector<vector<int>> diagonalSort(vector<vector<int>>& mtx) {
        map<pair<int, int>, vector<int>> d;
        int n = len(mtx);
        int m = len(mtx[0]);
        for (int i = 0; i < n; ++i) {
            vector<int> cur;
            int pi = i, pj = 0;
            while (pi < n && pj < m) {
                cur.pb(mtx[pi][pj]);
                ++pi;
                ++pj;
            }
            d[{i, 0}] = cur;
        }
        for (int j = 1; j < m; ++j) {
            vector<int> cur;
            int pi = 0, pj = j;
            while (pi < n && pj < m) {
                cur.pb(mtx[pi][pj]);
                ++pi;
                ++pj;
            }
            d[{0, j}] = cur;
        }
        for (auto& x : d) {
            sort(all(x.second));
        }
        for (int i = 0; i < n; ++i) {
            int pi = i, pj = 0, k = 0;
            while (pi < n && pj < m) {
                mtx[pi][pj] = d[{i, 0}][k++];
                ++pi;
                ++pj;
            }
        }
        for (int j = 1; j < m; ++j) {
            int pi = 0, pj = j, k = 0;
            while (pi < n && pj < m) {
                mtx[pi][pj] = d[{0, j}][k++];
                ++pi;
                ++pj;
            }
        }
        return mtx;
    }
};