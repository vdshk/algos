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
    int minSteps(string s, string t) {
        for (auto &x : s) {
            ++cnt[x - 'a'];
        }
        for (auto &x : t) {
            --cnt[x - 'a'];
        }
        int ans = 0;
        for (int i = 'a' - 'a'; i <= 'z' - 'a'; ++i) {
            ans += max(cnt[i], 0);
        }
        return ans;
    }

private:
    int cnt[26];
};