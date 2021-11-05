struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *temp=new Node(x);
       temp->next=head;
       head=temp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *temp=new Node(x);
       Node *start;
       start=head;
       if(head==NULL)
       return temp;
       else
       while(head->next!=NULL)
       {
           head=head->next;
       }
       head->next=temp;
       head=head->next;
       return start;
    }
};
