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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
        auto pa = list1, pb = list1;

        for (int i = 0; i < a - 1; ++i) {
            pa = pa->next;
        }

        pb = pa;

        for (int i = a - 1; i < b; ++i) {
            pb = pb->next;
        }

        pa->next = list2;

        while (list2->next != nullptr) {
            list2 = list2->next;
        }

        list2->next = pb->next;

        return list1;
    }
};