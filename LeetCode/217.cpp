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
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> store;
        for (auto &x : nums) {
            if (store.count(x) > 0) {
                return true;
            }
            store[x] = true;
        }
        return false;
    }
};