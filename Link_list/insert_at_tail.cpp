/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *tmplist=(struct Node*)malloc(sizeof(struct Node));
   	tmplist->data=data;
	tmplist->next=NULL;
	
   	if(head==NULL)
   	{
		head=tmplist;			
	}
	else
	{
        Node *tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp=head;
        while(tmp->next!=NULL)
         {
            tmp=tmp->next;
        }
		tmp->next=tmplist;
		
	}
    return head;
}

