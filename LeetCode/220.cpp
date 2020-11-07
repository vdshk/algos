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
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n = len(nums);
        vector<pair<long long, int>> a(n);
        for (int i = 0; i < n; ++i) {
            a[i] = {nums[i], i};
        }
        sort(all(a));
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (abs(a[i].first - a[j].first) <= t) {
                    if (abs(a[i].second - a[j].second) <= k) {
                        return true;
                    }
                } else {
                    break;
                }
            }
        }
        return false;
    }
};