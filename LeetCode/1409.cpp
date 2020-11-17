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
    vector<int> processQueries(vector<int> &queries, int m) {
        vector<int> ans;
        deque<int> p(m, 0);
        for (int i = 0; i < m; ++i) {
            p[i] = i;
        }
        for (auto &q : queries) {
            auto it = find(p.begin(), p.end(), q - 1);
            ans.push_back(it - p.begin());
            p.erase(it);
            p.push_front(q - 1);
        }
        return ans;
    }
};