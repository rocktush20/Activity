
 #include<bits/stdc++.h>
 using namespace std;
 #define int long long
 
 
 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL) {
            return list2;
        }
        else if(list2 == NULL) {
            return list1;
        }
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        while(list1 != NULL && list2 != NULL) {
            if(list1 ->val <= list2->val) {
                ListNode *newnode = new ListNode(list1->val);
                if(newHead == NULL) {
                    newHead = newnode;
                    newTail = newnode;
                }
                else {
                    newTail -> next = newnode;
                    newTail = newTail->next;
                }
                list1 = list1->next;
            }
            else{
                ListNode* newnode = new ListNode(list2->val);
                if(newHead == NULL) {
                    newHead = newnode;
                    newTail = newnode;
                }
                else {
                    newTail -> next = newnode;
                    newTail = newTail->next;
                }
                list2 = list2->next;
            }
        }
        if(list1 != NULL) {
            newTail -> next = list1;
            newTail = newTail->next;
        }
        if(list2 != NULL) {
            newTail -> next = list2;
            newTail = newTail->next;
        }
        return newHead;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) {
            return NULL;
        }
        if(lists.size() == 1) {
            return lists[0];
        }
        ListNode* ans = mergeTwoLists(lists[0], lists[1]);
        for(int i = 2; i < lists.size(); i++) {
            ans = mergeTwoLists(ans, lists[i]);
        }
        return ans;
    }

signed main(){
 
    return 0;
 }