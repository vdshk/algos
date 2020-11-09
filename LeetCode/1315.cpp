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
    int sumEvenGrandparent(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int res = 0;
        if (root->val % 2 == 0) {
            if (root->left != nullptr) {
                res += getVal(root->left->left);
                res += getVal(root->left->right);
            }
            if (root->right != nullptr) {
                res += getVal(root->right->left);
                res += getVal(root->right->right);
            }
        }
        return res + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
    }
    int getVal(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        return node->val;
    }
};