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
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prefix;
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int first = nums[i];
            int second = target - nums[i];
            if (prefix.count(second) > 0) {
                ans = {i, prefix[second]};
                break;
            }
            prefix[first] = i;
        }
        return ans;
    }
};