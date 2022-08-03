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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow->next;
        while(curr!=NULL){
            ListNode* fur=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fur;
        } 
        curr=head;
        while(prev!=NULL){
            if(prev->val!=curr->val)
                return false;
            prev=prev->next;
            curr=curr->next;
        }
        return true;
    }
   

};