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
    int maxCoins(vector<int> &piles) {
        sort(all(piles));
        int n = len(piles);
        int i = 0;
        int j = n - 2;
        int k = n - 1;
        int res = 0;
        while (n > 0) {
            res += piles[j];
            ++i;
            j -= 2;
            k -= 2;
            n -= 3;
        }
        return res;
    }
};