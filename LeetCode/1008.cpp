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
    TreeNode *bstFromPreorder(vector<int> &preorder) {
        auto root = new TreeNode(preorder[0]);
        int n = len(preorder);
        for (int i = 1; i < n; ++i) {
            insert(root, preorder[i]);
        }
        return root;
    }

    void insert(TreeNode *root, int value) {
        auto cur = root;
        while (true) {
            if (cur->val > value) {
                if (cur->left == nullptr) {
                    cur->left = new TreeNode(value);
                    return;
                } else {
                    cur = cur->left;
                }
            } else {
                if (cur->right == nullptr) {
                    cur->right = new TreeNode(value);
                    return;
                } else {
                    cur = cur->right;
                }
            }
        }
    }
};