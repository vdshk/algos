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
    TreeNode *bstToGst(TreeNode *root) {
        dfs(root);
        return root;
    }

    int dfs(TreeNode *node, int sum = 0) {
        int res = node->val;
        if (node->right != nullptr) {
            res += dfs(node->right, sum);
        }
        node->val = sum + res;
        if (node->left != nullptr) {
            res += dfs(node->left, node->val);
        }
        return res;
    }
};