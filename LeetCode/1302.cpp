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
    int deepestLeavesSum(TreeNode* root) {
        countDepth(root);
        int res = 0, max = INT_MIN;
        for (auto& x : depth) {
            if (max < x.second) {
                max = x.second;
            }
        }
        for (auto& x : depth) {
            if (max == x.second) {
                res += x.first->val;
            }
        }
        return res;
    }
    void countDepth(TreeNode* node, int cur_depth = 0) {
        if (node == nullptr) return;
        depth[node] = cur_depth;
        countDepth(node->left, cur_depth + 1);
        countDepth(node->right, cur_depth + 1);
    }
    unordered_map<TreeNode*, int> depth;
};