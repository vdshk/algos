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
    int numTeams(vector<int> &rating) {
        int n = len(rating);
        vector<int> pref_lower(n, 0), pref_greater(n, 0);
        vector<int> suff_lower(n, 0), suff_greater(n, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (rating[i] > rating[j]) {
                    ++pref_lower[i];
                    ++suff_greater[j];
                } else if (rating[i] < rating[j]) {
                    ++pref_greater[i];
                    ++suff_lower[j];
                }
            }
        }
        int res = 0;
        for (int i = 0; i < n; ++i) {
            res += pref_lower[i] * suff_greater[i];
            res += pref_greater[i] * suff_lower[i];
        }
        return res;
    }
};