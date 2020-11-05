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
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = len(grid);
        int m = len(grid[0]);
        vector<int> row_max(n, -1), column_max(m, -1);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                row_max[i] = max(row_max[i], grid[i][j]);
                column_max[j] = max(column_max[j], grid[i][j]);
            }
        }
        int res = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                res += max(0, min(row_max[i], column_max[j]) - grid[i][j]);
            }
        }
        return res;
    }
};