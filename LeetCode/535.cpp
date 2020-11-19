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

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        int n = len(urls);
        urls.push_back(longUrl);
        return to_string(n);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urls[stoi(shortUrl)];
    }

private:
    vector <string> urls;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));