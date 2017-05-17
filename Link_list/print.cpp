/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  struct Node *tmp;
	 tmp=(struct Node *)malloc(sizeof(struct Node));
	 tmp=head;
 	while(tmp!=NULL)
 	{
 		cout<<tmp->data<<endl;
 		tmp=tmp->next;
	}
}

