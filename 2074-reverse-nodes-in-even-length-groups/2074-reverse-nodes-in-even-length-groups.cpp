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
ListNode* reverse(ListNode* head, int k) {
     ListNode* prev = NULL;
      ListNode* curr = head;
      while(k--) {
         ListNode* next = curr->next; 
         curr->next = prev; 
         prev = curr; 
         curr = next; 
         } 
         head->next = curr; 
         return prev;
          }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode*pre = &dummy;
        ListNode*curr = head;
        int grpsize=1;
        while(curr!=NULL){
            ListNode*temp = curr;
            int cnt =0;
            while(temp!=NULL && cnt < grpsize ){
                temp = temp->next;
                cnt++;
            }
            ListNode* nextGroup = temp;
            if(cnt%2==0){
                ListNode* oldhead = curr;
                curr = reverse(curr,cnt);
                pre->next = curr;
                pre = oldhead;

            }
            else{
                for(int i =0;i<cnt ;i++){
                    pre = curr;
                    curr=curr->next;
                }
            }
            curr = nextGroup;
             grpsize++;
        }
        return dummy.next;
        
    }
};