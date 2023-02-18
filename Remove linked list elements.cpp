class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        if(head==NULL)
        return head;
        ListNode* curr=head,*prev=NULL;
        while(curr)
        {
            if(curr->val==val)
            {
                prev->next=curr->next;
            }
            else
            {
                prev=curr;
            }
            curr=curr->next;
        }
        return head;
    }
};
