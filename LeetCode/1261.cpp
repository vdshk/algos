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
class FindElements {
public:
    TreeNode *root;

    FindElements(TreeNode *root) : root(root) {
        restore(root);
    }

    void restore(TreeNode *root, int value = 0) {
        if (root == nullptr) {
            return;
        }
        root->val = value;
        restore(root->left, 2 * value + 1);
        restore(root->right, 2 * value + 2);
    }

    bool find(int target) {
        TreeNode *cur = root;
        return finder(target, cur);
    }

    bool finder(int target, TreeNode *&cur) {
        int parity = target & 1;
        return (!target) or finder((target >> 1) - 1 + parity, cur) and (cur = parity ? cur->left : cur->right);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */