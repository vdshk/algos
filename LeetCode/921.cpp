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
    int minAddToMakeValid(string s) {
        stack<char> stack;
        int ans = 0;
        for (auto &c : s) {
            if (c == '(') {
                stack.push(c);
            } else if (c == ')') {
                if (len(stack) != 0) {
                    stack.pop();
                } else {
                    ++ans;
                }
            }
        }
        return ans + len(stack);
    }
};