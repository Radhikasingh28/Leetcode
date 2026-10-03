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
ListNode* reverse(ListNode*head , int k){
    ListNode*pre = NULL;
    ListNode* curr= head;
    while(k--){
        ListNode* next = curr->next;
         curr->next = pre ;
          pre = curr;
           curr= next;
    }
     head->next = curr;
      return pre ;
}

    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* pre = &dummy ;
         ListNode* curr= head;
        
         while(curr!=NULL){
             ListNode* temp = curr;
              int c= 0;
              while(temp!=NULL && c<2 ){
                temp=temp->next;
                c++;
              }
              if(c<2)break;
              ListNode* nextgrp = temp ;
               ListNode* oldgrp = curr;
              

               curr= reverse(curr,2);
                pre->next = curr;
                pre = oldgrp ;
              curr=nextgrp;



               
         }
         return dummy.next;
        
    }
};