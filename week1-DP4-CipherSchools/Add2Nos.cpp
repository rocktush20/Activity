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

int pos(ListNode *num)
{
    return num->val;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int carry = 0;
    ListNode *temp = new ListNode(-1);
    ListNode *cur = temp;
    while (l1 != nullptr || l2 != nullptr || carry > 0)
    {
        if (l1 != nullptr && l2 != nullptr)
        {
            carry += l1->val + l2->val;
            l1 = l1->next;
            l2 = l2->next;
        }
        else if (l1 == nullptr && l2 != nullptr)
        {
            carry += l2->val;
            l2 = l2->next;
        }

        else if (l1 != nullptr && l2 == nullptr)
        {
            carry += l1->val;
            l1 = l1->next;
        }

        ListNode *nw = new ListNode(-1);
        nw->val = carry % 10;
        cur->next = nw;
        cur = cur->next;
        carry /= 10;
    }

    return temp->next;
}

signed main()
{
    return 0;
}