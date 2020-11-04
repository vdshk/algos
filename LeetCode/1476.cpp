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

class SubrectangleQueries {
   public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->mtx = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i = row1; i <= row2; ++i) {
            for (int j = col1; j <= col2; ++j) {
                this->mtx[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col) {
        return this->mtx[row][col];
    }

    vector<vector<int>> mtx;
};