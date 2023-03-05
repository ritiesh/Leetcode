class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        return head;
        map<int ,int>mp;
        ListNode* temp=head,*pre;
        while(temp)
        {
           mp[temp->val]++;
           temp=temp->next;
        }
        int flag=0;
        temp=head;
        for(auto x:mp)
        {
            if(x.second==1)
            {   flag=1;
                temp->val=x.first;
                pre=temp;
                temp=temp->next;
            }
        }
        if(!flag)return NULL;
        pre->next=NULL;
        return head;
    }
};
