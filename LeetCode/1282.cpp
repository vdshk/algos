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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = len(groupSizes);
        vector<pair<int, int>> peoples(n);
        for (int i = 0; i < n; ++i) {
            peoples[i] = {groupSizes[i], i};
        }
        sort(all(peoples));
        vector<vector<int>> ans;
        vector<int> cur;
        for (auto& x : peoples) {
            if (len(cur) + 1 == x.first) {
                cur.push_back(x.second);
                ans.push_back(cur);
                cur.clear();
            } else if (len(cur) + 1 < x.first) {
                cur.push_back(x.second);
            } else if (len(cur) + 1 > x.first) {
                ans.push_back(cur);
                cur.clear();
                cur.push_back(x.second);
            }
        }
        return ans;
    }
};