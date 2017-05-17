/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *new_node=new Node;
    new_node->data=data;
    new_node->next=NULL;
    
    if(head==NULL)
            {
            head=new_node;
        }
    
    
   if(position==0)
        {
            new_node->next=head;
            head=new_node;
        }
    else
    {
        
        Node *tmplist=new Node;
        tmplist=head;
        if(position==1)
            {
                Node *tmp=new Node;
                tmp=head->next;
                new_node->next=tmp;
                head->next=new_node;
             //cout<<"\n current "<<head->data<<"1st "<<new_node->data<<"\n";
        }
        else
            {
                for(int i=0;i<position-1;i++)
                 {
                    tmplist=tmplist->next;
                }

                Node *tmp=new Node;
                //cout<<"\n current "<<head->data<<" new "<<new_node->data<<"\n";
                new_node->next=tmplist->next;
                tmplist->next=new_node;
        }
        
        
       
    }
    
    return head;
}

