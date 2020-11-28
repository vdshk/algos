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
    vector<int> findSmallestSetOfVertices(int n, vector <vector<int>> &edges) {
        vector<int> out(n, 0);
        for (auto const &edge : edges) {
            int from = edge[0], to = edge[1];
            ++out[to];
        }
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            if (out[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};