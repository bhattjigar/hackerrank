/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *tmp= new Node;
    
    Node *list=new Node;
    list=head;
    if(position==0)
        {
         head=head->next;
    }
    else
        {
            for(int i=0;i<position-1;i++)
            {
                list=list->next;
            }
            tmp=list->next;
            list->next=tmp->next;
            free (tmp);
    }
    
    return head;
}

