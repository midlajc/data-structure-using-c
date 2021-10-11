#include <stdio.h>
#include <stdlib.h>

void display();
void insert();
void search();

struct linked_list{
	int data;
	struct linked_list *next;
};

struct linked_list *head=NULL,*tail=NULL;

void main()
{
	int choice;
	clrscr();
	while(1)
    {
	      printf("\n");
	      printf("1.Insert\n");
	      printf("2.Display\n");
	      printf("3.Search\n");
	      printf("4.Exit\n");
	      printf("Enter your choice:");
	      scanf("%d",&choice);
	      switch(choice)
	  {
		      case 1:
			      insert();
			      break;
		      case 2:
			      display();
			      break;
		      case 3:
			      search();
			      break;
		      case 4:
			      exit(0);

          }
    }
}

void insert()
{
	struct linked_list *temp;
	temp=(struct linked_list *)malloc(sizeof(struct linked_list));
	printf("Enter Element:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
              head=temp;
              tail=temp;
              tail->next=NULL;
	}
	else
	{
	      tail->next=temp;
	      tail=temp;
	      tail->next=NULL;
	}
}

void display()
{
	struct linked_list *temp=head;
	if(head==NULL)
		printf("\nNo Elements Found\n");
	else
	{
		printf("\nLinked List: %u",temp);
		while(temp!=NULL)
		{
			printf("->[%d|%u]",temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n");
	}
}

void search()
{
	int search_ele,flag=0;
	struct linked_list *temp=head;
	if(head==NULL)
	{
		printf("\nList is Empty\n");
		return;
	}
	printf("Enter Seach Element:");
	scanf("%d",&search_ele);
	printf("\n");
	while(temp!=NULL)
	{
		if(search_ele==temp->data)
		{
		    printf("Element Found at location %d\n",temp);
		    flag=1;
		}
		temp=temp->next;
	}
	if(flag==0)
		printf("Element not Found\n");
}
