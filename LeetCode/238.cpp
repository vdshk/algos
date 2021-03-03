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
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = len(nums);
        vector<int> ans(n, 1);

        int prefix = nums[0];
        for (int i = 1; i < n; ++i) {
            ans[i] *= prefix;
            prefix *= nums[i];
        }

        int suffix = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};