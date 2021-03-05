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
    int maxProduct(vector<int>& nums) {
        int n = len(nums);
        int ans = INT_MIN;
        int cur_min = 1;
        int cur_max = 1;

        for (auto &x : nums) {
            auto tmp = {x * cur_max, x * cur_min, x};
            cur_max = max(tmp);
            cur_min = min(tmp);
            ans = max(ans, cur_max);
        }

        return ans;
    }
};