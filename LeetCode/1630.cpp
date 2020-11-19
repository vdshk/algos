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
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r) {
        int m = len(l);
        vector<bool> ans(m, true);
        for (int i = 0; i < m; ++i) {
            vector<int> cur;
            for (int j = l[i]; j <= r[i]; ++j) {
                cur.push_back(nums[j]);
            }
            sort(all(cur));
            for (int j = 1; j < len(cur); ++j) {
                if (cur[j] - cur[j - 1] != cur[1] - cur[0]) {
                    ans[i] = false;
                    break;
                }
            }
        }
        return ans;
    }
};