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
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2) {
        vector<int> a, b, ans;
        traversal(root1, a);
        traversal(root2, b);
        int n = len(a), m = len(b);
        for (int i = 0, j = 0; i < n || j < m;) {
            if (i == n) {
                ans.push_back(b[j]);
                ++j;
            } else if (j == m) {
                ans.push_back(a[i]);
                ++i;
            } else {
                if (a[i] < b[j]) {
                    ans.push_back(a[i]);
                    ++i;
                } else {
                    ans.push_back(b[j]);
                    ++j;
                }
            }
        }
        return ans;
    }

    void traversal(TreeNode *node, vector<int> &ans) {
        if (node == nullptr) {
            return;
        }
        traversal(node->left, ans);
        ans.push_back(node->val);
        traversal(node->right, ans);
    }
};