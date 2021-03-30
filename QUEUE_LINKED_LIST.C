#include <stdio.h>
#include <stdlib.h>

void display();
void enQueue(int data);
void deQueue();

struct queue{
	struct queue *prev;
	int data;
};

struct queue *front=NULL,*rear=NULL;

void main()
{
	int choice,data;
	clrscr();
	while(1)
	{
	      printf("\n");
	      printf("1.EnQueue\n");
	      printf("2.DeQueue\n");
	      printf("3.Display\n");
	      printf("4.Exit\n");
	      printf("Enter your choice:");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		      case 1:
			      printf("\nEnter a Number:") ;
			      scanf("%d",&data);
			      enQueue(data);
			      break;
		      case 2:
			      deQueue();
			      break;
		      case 3:
			      display();
			      break;
		      case 4:
			      exit(0);
	      }
	}
}

void enQueue(int data)
{
	struct queue *temp;
	temp=(struct queue *)malloc(sizeof(struct queue));
	temp->data=data;
	if(rear==NULL)
	{
	      front=temp;
	      rear=temp;
	      temp->prev=NULL;
	}
	else
	{
	      rear->prev=temp;
	      rear=rear->prev;
	      rear->prev=NULL;
	}
}

void display()
{
	struct queue *temp=front;
	if(rear==NULL)
		printf("\nQueue Underflow\n");
	else
	{
		printf("\nQueue: %u",temp);
		while(temp!=NULL)
		{
			printf("->[%d|%u]",temp->data,temp->prev);
			temp=temp->prev;
		}
		printf("\n");
	}
}

void deQueue()
{
	int data;
	struct queue *temp=front;
	if(temp==NULL)
		printf("\nQueue Underflow\n");
	else
	{
		if(front->prev==NULL)
			rear=front=NULL;
		else
			front=front->prev;
		printf("\nData: %d\n",temp->data);
		free(temp);
	}
}
