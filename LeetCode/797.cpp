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

class Solution {
public:
    vector <vector<int>> allPathsSourceTarget(vector <vector<int>> &graph) {
        vector <vector<int>> ans;
        vector<int> path = {0};
        dfs(0, path, graph, ans, len(graph));
        return ans;
    }

    void dfs(int v, vector<int> &path, vector <vector<int>> &graph, vector <vector<int>> &ans, int n) {
        if (v == n - 1) {
            ans.push_back(path);
        }
        for (auto &to : graph[v]) {
            path.push_back(to);
            dfs(to, path, graph, ans, n);
            path.pop_back();
        }
    }
};