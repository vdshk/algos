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
    int maxSubArray(vector<int>& nums) {
        int n = len(nums);
        int ans = INT_MIN;
        int cur = 0;

        for (auto &x : nums) {
            cur = max(cur + x, x);
            ans = max(ans, cur);
        }

        return ans;
    }
};