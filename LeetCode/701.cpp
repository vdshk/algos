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
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        auto new_node = new TreeNode(val), cur = root;
        if (root == nullptr) {
            return new_node;
        }
        while (cur) {
            if (cur->val > val && cur->left) {
                cur = cur->left;
            } else if (cur->val < val && cur->right) {
                cur = cur->right;
            } else {
                break;
            }
        }
        if (cur->val > val) {
            cur->left = new_node;
        } else {
            cur->right = new_node;
        }
        return root;
    }
};