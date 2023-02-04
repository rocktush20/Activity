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
 

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *list3 = list1, *list4 = list2;
    ListNode *temp = new ListNode(-1);
    ListNode *head2 = temp;
    ListNode *temp2;
    while (list3 != nullptr && list4 != nullptr)
    {

        if ((list3->val) <= (list4->val))
        {
            temp2 = new ListNode(list3->val);
            list3 = list3->next;
        }
        else
        {
            temp2 = new ListNode(list4->val);
            list4 = list4->next;
        }

        temp->next = temp2;
        temp = temp->next;
        cout << temp->val;
    }

    if (list3 != nullptr)
    {
        while (list3 != nullptr)
        {
            temp2 = new ListNode(list3->val);
            list3 = list3->next;
            temp->next = temp2;
            temp = temp->next;
        }
    }
    if (list4 != nullptr)
    {
        while (list4 != nullptr)
        {
            temp2 = new ListNode(list4->val);
            list4 = list4->next;
            temp->next = temp2;
            temp = temp->next;
        }
    }

    return head2->next;
}

signed main()
{

    return 0;
}