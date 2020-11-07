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
    int myAtoi(string s) {
        int i = 0;
        int n = len(s);
        int sign = 1;
        int result = 0;
        string res = "";
        string max = to_string(INT_MAX);
        while (i < n && s[i] == ' ') ++i;
        if (i == n) {
            return 0;
        }
        if (s[i] == '+') {
            sign = 1;
            ++i;
        } else if (s[i] == '-') {
            sign = -1;
            ++i;
        } else if (!('0' <= s[i] && s[i] <= '9')) {
            return 0;
        }
        while ((i < n) && (s[i] == '0')) ++i;
        while ((i < n) && ('0' <= s[i] && s[i] <= '9')) {
            res += s[i];
            ++i;
        }
        if (len(res) > len(max) || (len(res) == len(max) && res > max)) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        for (char &x : res) {
            result = result * 10 + (x - '0');
        }
        return sign * result;
    }
};