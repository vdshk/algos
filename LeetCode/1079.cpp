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
    int numTilePossibilities(string tiles) {
        for (auto &x : tiles) {
            ++cnt[x - 'A'];
        }
        return dfs(cnt);
    }

    int dfs(int cnt[]) {
        int res = 0;
        for (int i = 'A' - 'A'; i <= 'Z' - 'A'; ++i) {
            if (cnt[i] != 0) {
                ++res;
                --cnt[i];
                res += dfs(cnt);
                ++cnt[i];
            }
        }
        return res;
    }

private:
    int cnt[26]{};
};