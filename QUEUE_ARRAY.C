#include <stdio.h>
#include <stdlib.h>

void enQueue();
void display();
void deQueue();

int *queue,rear=-1,total_elements=10;

void main()
{
	int choice;
	queue=(int *)calloc(total_elements,sizeof(int));
	clrscr();
	printf("**----Queue Using Array----**\n");
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
			      enQueue();
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

void enQueue()
{

	int data;
	printf("\nEnter a Number: ");
	scanf("%d",&data);
	if(rear>=total_elements-1)
	{
		/*printf("%d ",sizeof(stack));
		stack=realloc(stack,sizeof(stack));
		printf("%d",sizeof(stack));
		*(stack+ptr)=data;
		ptr++;*/
		printf("\nQueue Overflow\n");
	}
	else
	{
		rear++;
		*(queue+rear)=data;
	}
}

void display()
{
	int i;
	if(rear==-1)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		printf("\nQueue: ");
		for(i=0;i<=rear;i++)
		{
			printf("%d ",*(queue+i));
		}
		printf("\n");
	}
}

void deQueue()
{
	int data;
	if(rear==-1)
		printf("\nQueue Underflow\n");
	else
	{
		int i;
		data=*queue;
		for(i=0;i<=rear;i++)
		{
			*(queue+i)=*(queue+i+1);
		}
		rear--;
		printf("\nData: %d\n",data);
	}
}
