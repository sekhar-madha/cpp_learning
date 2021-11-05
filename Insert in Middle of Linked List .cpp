struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	int c=0;
	Node *head1,*head2,*temp=new Node(x);
	head1=head;
	head2=head;
	while(head1!=NULL)
	{
	    c+=1;
	    head1=head1->next;
	}
    if(c%2==0)
    c=c/2;
    else
    c=(c/2)+1;
    while(head!=NULL)
    {
        if(c==1)
        {
            //cout<<head->data<<" ";
            temp->next=head->next;
            head->next=temp;
            break;
        }
        head=head->next;
        c-=1;
    }
    return head2;
}