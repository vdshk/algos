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
    string reverseWords(string s) {
        string res = "", cur = "";
        vector<string> words;
        for (auto &c : s) {
            if (c == ' ') {
                if (cur != "") {
                    words.push_back(cur);
                    cur = "";
                }
            } else {
                cur += c;
            }
        }
        if (cur != "") {
            words.push_back(cur);
        }
        for (int i = len(words) - 1; i > 0; --i) {
            res += words[i] + " ";
        }
        res += words[0];
        return res;
    }
};