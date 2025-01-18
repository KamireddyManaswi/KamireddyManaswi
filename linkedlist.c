#include<stdio.h>
#include<stdlib.h>

 struct node
  {
    int data;
    struct node *next;
  };

void main()
{
   struct node *newnode,*temp,*head=NULL;
   int choice=1;
   while(choice==1)
  {
     newnode=(struct node*)malloc(sizeof(struct node));  
     printf("enter the data:\n");
     scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(head==NULL)
       {
         head=temp=newnode;
       }
      else
       {
         temp->next=newnode;
         temp=newnode;
       }

      printf("Enter 1 for continue,0 for stop");
      scanf("%d",&choice); 
  }
    temp=head;

   printf("the linked list is:\n");
   while(temp!=NULL)
    {
      printf("%d",temp->data);
      temp=temp->next;
      printf("\n");
    }
}
      




