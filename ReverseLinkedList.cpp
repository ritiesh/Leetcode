class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode* newnode=NULL;
            while(curr)
            {
                newnode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=newnode;
            }
            return prev;
    }
};
