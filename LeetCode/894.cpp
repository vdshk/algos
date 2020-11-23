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
    vector<TreeNode *> allPossibleFBT(int n) {
        vector < TreeNode * > dp[21];
        dp[1] = {new TreeNode()};
        for (int i = 3; i <= n; ++i) {
            for (int j = 1; j <= i - 2; ++j) {
                for (auto &left : dp[j]) {
                    for (auto &right : dp[i - j - 1]) {
                        auto cur = new TreeNode(0, left, right);
                        dp[i].push_back(cur);
                    }
                }
            }
        }
        return dp[n];
    }
};