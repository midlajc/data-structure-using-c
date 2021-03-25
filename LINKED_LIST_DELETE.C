#include <stdio.h>
#include <stdlib.h>

void display();
void insert();
void delete_node(int);

struct linked_list{
	int data;
	struct linked_list *next;
};

struct linked_list *head=NULL,*tail=NULL;

void main()
{
	int choice,no_of_nodes=0;
	clrscr();
	while(1)
	{
	      printf("\n");
	      printf("1.Insert\n");
	      printf("2.Delete\n");
	      printf("3.Display\n");
	      printf("4.Exit\n");
	      printf("Enter your choice:");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		      case 1:
			      insert();
			      no_of_nodes++;
			      break;
		      case 2:
			      delete_node(no_of_nodes);
			      break;
		      case 3:
			      display();
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

void delete_node(int no_of_nodes)
{
	int index,i;
	struct linked_list *temp=head,*ptr;
	printf("Enter Position of node:");
	scanf("%d",&index);
	if(index>no_of_nodes)
		printf("\nonly %d element\n",no_of_nodes);
	else
	{
	    if(index==1)
	    {
		head=head->next;
		printf("\nNode Deleted Value=%d\n",temp->data);
		free(temp);
	    }
	    else
	    {
		for(i=1;i<index;i++)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=temp->next;
		printf("\nNode Deleted Value=%d\n",temp->data);
		free(temp);
	    }
	}
}
