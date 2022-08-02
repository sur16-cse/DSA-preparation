/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int a=count(head1);
        int b=count(head2);
        if(a>b){
            return getIntersection(a-b,head1,head2);
        }
        else
           return getIntersection(b-a,head2,head1); 
    }
    
    int count(ListNode* head){
        int cnt=0;
        ListNode* curr=head;
        while(curr!=NULL){
            cnt++;
            curr=curr->next;
        }
        return cnt;
    }
    ListNode* getIntersection(int d,ListNode *head1, ListNode *head2){
        ListNode* curr1=head1;
        ListNode* curr2=head2;
       for(int i=0;i<d;i++){
            if(curr1==NULL) return NULL;
            curr1=curr1->next;
        }
        while(curr1!=NULL && curr2!=NULL){
            if(curr1==curr2)
                return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
};