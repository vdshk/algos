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

class CustomStack {
public:
    CustomStack(int maxSize) {
        position = 0;
        max_size = maxSize;
        data = vector<int>(max_size, 0);
    }

    void push(int x) {
        if (position != max_size) {
            data[position++] = x;
        }
    }

    int pop() {
        return position != 0 ? data[--position] : -1;
    }

    void increment(int k, int val) {
        for (int i = 0; i < min(k, position); ++i) {
            data[i] += val;
        }
    }

private:
    int position = 0, max_size = 0;
    vector<int> data;
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */