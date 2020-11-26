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
    vector<int> deckRevealedIncreasing(vector<int> &deck) {
        int n = len(deck);
        sort(all(deck));
        deque<int> cur;
        for (int i = 0; i < n; ++i) {
            cur.push_back(i);
        }
        vector<int> ans(n);
        for (auto &card : deck) {
            ans[cur.front()] = card;
            cur.pop_front();
            if (len(cur) != 0) {
                cur.push_back(cur.front());
                cur.pop_front();
            }
        }
        return ans;
    }
};