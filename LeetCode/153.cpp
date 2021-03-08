#include <bits/stdc++.h>

#define len(a) (int)a.size()

using namespace std;

typedef string str;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = len(nums);
        int l = 0;
        int r = len(nums) - 1;
        int m;

        if (nums[r] >= nums[0]) {
            return nums[0];
        }

        while (l <= r) {
            m = (l + r) / 2;

            if (m < n - 1 && nums[m] > nums[m + 1]) {
                return nums[m + 1];
            }

            if (m > 0 && nums[m - 1] > nums[m]) {
                return nums[m];
            }

            if (nums[m] > nums[0]) {
                l = m;
            } else {
                r = m;
            }
        }

        return nums[m];
    }
};