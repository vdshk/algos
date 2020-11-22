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
    vector<int> partitionLabels(string s) {
        int n = len(s), m = 'z' - 'a' + 1;
        vector<int> lst(m, INT_MIN);
        for (int i = 0; i < n; ++i) {
            lst[s[i] - 'a'] = max(lst[s[i] - 'a'], i);
        }
        vector<int> ans;
        for (int i = 0; i < n;) {
            int r = lst[s[i] - 'a'];
            for (int j = i; j <= r; ++j) {
                r = max(r, lst[s[j] - 'a']);
            }
            ans.push_back(r - i + 1);
            i = r + 1;
        }
        return ans;
    }
};