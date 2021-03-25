#include <stdio.h>
#include <stdlib.h>

void display();
void insert();

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
	      printf("3.Exit\n");
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
		printf("\nLinked List:");
		printf("%u",temp);
		while(temp!=NULL)
		{
			printf("->[%d|%u]",temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n");
	}
}
