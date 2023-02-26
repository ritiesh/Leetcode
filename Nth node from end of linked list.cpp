int getNthFromLast(Node *head, int n)
{
       Node* temp=head;
       int count=0;
       while(temp)
       {
           count=count+1;
           temp=temp->next;
       }
       if(n>count)
       return -1;
       int m=count-n;
       while(m)
       {
           head=head->next;
           m--;
       }
       return head->data;
       
}
