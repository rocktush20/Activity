#include <bits/stdc++.h>
using namespace std;
#define int long long

 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode *rotateRight(ListNode *head, int k)
{
    if (!head)
        return head;
    int nodes = 0;
    for (ListNode *h = head; h != nullptr; h = h->next)
        nodes++;

    int rotate = k % nodes;

    if (rotate == 0)
        return head;

    ListNode *l1 = nullptr, *prev = nullptr, *curr = head;
    ListNode *p = nullptr;

    while (curr)
    {
        prev = l1;
        l1 = l1 == nullptr ? l1 : l1->next;
        if (--rotate == 0)
            l1 = head;
        p = curr;
        curr = curr->next;
    }

    prev->next = nullptr;
    p->next = head;
    return l1;
}

signed main()
{

    return 0;
}