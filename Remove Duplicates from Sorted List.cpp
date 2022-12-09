class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->next && temp->next->val == temp->val)
            {
                temp->next=temp->next->next;
            }
            else
            temp=temp->next;
        }
        return head;
    }
};
