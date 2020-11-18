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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        return construct(nums, 0, len(nums));
    }

    TreeNode *construct(vector<int> &a, int l, int r) {
        if (l >= r) {
            return nullptr;
        }
        int mx = a[l], m = l;
        for (int i = l + 1; i < r; ++i) {
            if (mx < a[i]) {
                mx = a[i];
                m = i;
            }
        }
        auto root = new TreeNode(mx);
        root->left = construct(a, l, m);
        root->right = construct(a, m + 1, r);
        return root;
    }
};