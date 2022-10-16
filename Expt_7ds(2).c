#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void addLast(struct node **head,int val)
{
	//create new node
	struct node *newNode=malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next =NULL;
	//if head is NULL,it is an empty list
	if(*head==NULL)
	*head=newNode;
	//otherwise,find the last node add the new node
	else
	{
		struct node*lastNode=*head;
		//last node's next address will be null.
		while(lastNode->next!=NULL)
		{
			lastNode=lastNode->next;
		}
		//add the new node at the end of the linked list
		lastNode->next=newNode;
	}
	
}
void printList(struct node *head)
{
 struct node *temp=head;
 //iterate the entire linked list and print the data
 while(temp !=NULL)
 {
 	printf("%d->",temp->data);
 	temp=temp->next;
 }
 printf("NULL\n");
}
int main()
{
	struct node*head=NULL;
	addLast(&head,10);
	addLast(&head,20);
	addLast(&head,30);
	printList(head);
	return 0;
	
}
	
