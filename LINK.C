#include <stdio.h>
#include <stdlib.h>

void insert(int);
void display();

struct linked_list{
    int data;
    struct linked_list *next;
};

struct linked_list *head=NULL;

void main()
{
    int limit,choice;
    clrscr();
    while(1)
	{
	    printf("\nLinked List");
	    printf("\n1.Insert:");
	    printf("\n2.Display:");
	    printf("\n3.Exit");
	    printf("\nEnter Choice:");
	    scanf("%d",&choice);
	    switch(choice)
	    {
		case 1:
		    printf("Enter Number of Elements:");
		    scanf("%d",&limit);
		    insert(limit);
		    main();
		case 2:
		    display();
		    break;
		case 3:
		    exit(0);
	    }

	}
}

void insert(int limit)
{
    int i;
    struct linked_list *temp,*ptr;
    if(head==NULL)
    {
	printf("Enter Elements into Linked List:");
	for(i=0;i<limit;i++)
	{
	    temp=(struct linked_list *)malloc(sizeof(struct linked_list));
	    scanf("%d",&temp->data);
	    if(i==0)
		head=temp;
	    temp=temp->next;
	}

    }
    else
    {
	printf("Enter Elements into Linked List:");
	temp=head;
	while(temp->next!=NULL)
	    temp=temp->next;
	for(i=0;i<limit;i++)
	{
	    temp=(struct linked_list *)malloc(sizeof(struct linked_list));
	    scanf("%d",&temp->data);
	    if(i==0)
		head=temp;
	    temp=temp->next;
	}
    }
    return;
}

void display()
{
    struct linked_list *temp;
    if(head==NULL)
	printf("\nList is Empty\n");
    else
    {
	temp=head;
	printf("\nLinked List:");
	do{
	    printf("%d ",temp->data);
	    temp=temp->next;
	}while(temp->next);
	printf("\n");
    }
    return;
}
