Node* deleteNode(Node *head,int x)
{
    if(x==1)
    {
        Node* temp=head;
        head=temp->next;
        free(temp);
        return head;
    }
    int i=1;
    Node*temp=head;
    while(i<x-1)
    {
        temp=temp->next;
        i++;
    }
    Node* newnode=temp->next;
    temp->next=newnode->next;
    free(newnode);
    return head;
}
