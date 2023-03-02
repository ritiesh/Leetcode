class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* temp2=NULL;
        int count=0;
        while(temp)
        {
            count=count+1;
            temp=temp->next;
        }
        int k=count-n;
        if(k==0)
        {
            temp2=head->next;
           
            return temp2;
        }
        int p=0;
        ListNode* temp1=head;
        while(head)
        {
            p++;
            if(p==k)
            {
                head->next=head->next->next;
            }
            head=head->next;
        }
        return temp1;

    }
};
