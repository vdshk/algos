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
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(all(points), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        int ans = 0;
        for (int i = 1; i < len(points); ++i) {
            ans = max(ans, abs(points[i][0] - points[i - 1][0]));
        }
        return ans;
    }
};