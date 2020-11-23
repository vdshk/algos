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
    vector <vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum) {
        int n = len(rowSum), m = len(colSum);
        auto ans = vector < vector < int >> (n, vector<int>(m, 0));
        for (int i = 0, j = 0; (i < n) && (j < m);) {
            int mn = min(rowSum[i], colSum[j]);
            ans[i][j] = mn;
            if (rowSum[i] -= mn; rowSum[i] == 0) ++i;
            if (colSum[j] -= mn; colSum[j] == 0) ++j;
        }
        return ans;
    }
};