#include <bits/stdc++.h>
#include <limits.h>

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
    int divide(int dividend, int divisor) {
        long long x = dividend;
        long long y = divisor;
        int sign = 1;
        if (x < 0) {
            sign *= -1;
            x *= -1;
        }
        if (y < 0) {
            sign *= -1;
            y *= -1;
        }
        long long res = 0;
        for (int i = 31; i >= 0; --i) {
            long long cur = y << i;
            if (cur <= x) {
                x -= cur;
                res += 1LL << i;
            }
        }
        res *= sign;
        return res > INT_MAX ? INT_MAX : res;
    }
};