class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)return false;
        stack<int>s;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            s.push(temp->val);
            temp=temp->next;
        }
       /* while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }*/
        while(head!=NULL)
        {
            if(s.top()!=head->val)
            return false;
            head=head->next;
            s.pop();
        }
        return true;
    }
};
