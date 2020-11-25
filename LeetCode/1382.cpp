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
    TreeNode *balanceBST(TreeNode *root) {
        vector<int> values;
        inorder(root, values);
        return construct(values, 0, len(values) - 1);
    }

    void inorder(TreeNode *node, vector<int> &in) {
        if (node == nullptr) {
            return;
        }
        inorder(node->left, in);
        in.push_back(node->val);
        inorder(node->right, in);
    }

    TreeNode *construct(vector<int> &values, int l, int r) {
        if (l > r) {
            return nullptr;
        }
        int m = (l + r) >> 1;
        return new TreeNode(values[m], construct(values, l, m - 1), construct(values, m + 1, r));
    }
};