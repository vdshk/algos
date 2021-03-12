#include <bits/stdc++.h>

#define len(a) (int)a.size()

using namespace std;

typedef string str;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = len(nums) - 1;
        int m;

        while (l < r) {
            m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }

        return search_unrotated(nums, target, l);
    }

    int search_unrotated(vector<int>& nums, int target, int rotation) {
        int l = 0;
        int r = len(nums) - 1;
        int n = len(nums);
        int m;
        int rotated_m;

        while (l <= r) {
            m = l + (r - l) / 2;
            rotated_m = (m + rotation) % n;

            if (nums[rotated_m] == target) {
                return rotated_m;
            }

            if (nums[rotated_m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return -1;
    }
};