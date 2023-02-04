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

int comparList(ListNode *list1, ListNode *list2)

{
ListNode *l1 = list1;
ListNode *l2 = list2;

    while (l1 != NULL && l2 != NULL)

    {

        if (l1->val > l2->val)

            return 1;

        else if (l1->val < l2->val)

            return -1;

        l1 = l1->next;

        l2 = l2->next;
    }

    if (l1 != NULL)

        return 1;

    else if (l2 != NULL)

        return -1;

    else

        return 0;
}

signed main()
{

    return 0;
}