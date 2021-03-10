#include <bits/stdc++.h>

#define len(a) (int)a.size()

using namespace std;

typedef string str;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = len(nums) - 1;
        int m;

        while (l < r) {
            m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;
            } else if (nums[m] < nums[r]) {
                r = m;
            } else if (nums[r - 1] > nums[r]) {
                l = r;
            } else {
                --r;
            }
        }

        return nums[l];
    }
};