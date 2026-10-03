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
ListNode* reverse(ListNode* head, int k){
    ListNode* pre = NULL;
    ListNode* curr = head;
    while(k--){
        ListNode* next = curr->next;
        curr->next = pre;
        pre= curr;
        curr= next;
    }
    head->next= curr;
    return pre;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* pre = &dummy;
        ListNode* curr= head;

        while(curr!=NULL){
            ListNode* temp = curr;
            int count =0;
            while(temp!=NULL && count < k){
                temp = temp->next;
                count++;
            }
            if(count<k){
                break;
            }
                ListNode* oldhead = curr;
                  ListNode* nextGroup = temp;
                curr= reverse(curr,k);
                pre->next = curr;
                pre = oldhead;
                curr= nextGroup;

           
        }
        return dummy.next;
        
    }
};