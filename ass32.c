#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

int main()
{
	struct node *head, *newnode,*temp;
	int i,n;

  head= NULL;

printf("enter the node number:");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
  newnode=(struct node*)malloc(sizeof(struct node));
 
 printf("enter data:");
 scanf("%d",&newnode->data);
 
 newnode->next=NULL;
 
 if(head==NULL)
 
{
	head=newnode;
	temp=newnode;
}
 else
 {
 	temp->next=newnode;
 	temp=newnode;
}
}

temp->next=head;

printf("circular linked list ");

temp=head;
 
do
{
	printf("%d ->",temp->data);
	temp=temp->next;
}
 while(temp!=head);
 
 printf("back to head");
 
 return 0;
}