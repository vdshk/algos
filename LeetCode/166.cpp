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
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) {
            return "0";
        }
        string res = "";
        long long x = numerator, y = denominator, frac, sign = 1;
        if (x < 0) {
            x *= -1;
            sign *= -1;
        }
        if (y < 0) {
            y *= -1;
            sign *= -1;
        }
        frac = x / y;
        if (sign == -1) {
            res += "-";
        }
        res += to_string(frac);
        if (x % y != 0) {
            res += "." + helper(x - frac * y, y);
        }
        return checker(res);
    }
    string helper(long long x, long long y) {
        long long frac = (x * 10) / y;
        if ((x * 10) % y == 0) {
            return to_string(frac);
        }
        if (m.count(x) == 0) {
            m[x] = (x * 10) - y * frac;
            return to_string(frac) + helper(m[x], y);
        } else {
            string res = "(";
            long long cur_x = x;
            do {
                res += to_string(frac);
                cur_x = m[cur_x];
                frac = (10 * cur_x) / y;
            } while (cur_x != x);
            return res + ")";
        }
    }
    string checker(string s) {
        if (s.find('(') != string::npos) {
            int l = s.find('('), r = s.find(')'), len = r - l - 1;
            return s.substr(0, l - len) + s.substr(l, len + 2);
        } else {
            return s;
        }
    }
    map<long long, long long> m;
};