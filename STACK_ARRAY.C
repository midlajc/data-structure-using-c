#include <stdio.h>
#include <stdlib.h>

int pop();
void display();
void push(int);

int *stack,ptr=-1,total_elements=2;

void main()
{
	int choice,data;
	stack=(int *)calloc(total_elements,sizeof(int));
	clrscr();
	while(1)
	{
	      printf("\n");
	      printf("1.Push\n");
	      printf("2.Pop\n");
	      printf("3.Display\n");
	      printf("4.Exit\n");
	      printf("Enter your choice:");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		      case 1:
			      printf("\nEnter a Number:");
			      scanf("%d",&data);
			      push(data);
			      break;
		      case 2:
			      data=pop();
			      printf("Data: %d",data);
			      break;
		      case 3:
			      display();
			      break;
		      case 4:
			      exit(0);
	      }
	}
}

void push(int data)
{
	if(ptr>total_elements)
	{
		/*printf("%d ",sizeof(stack));
		stack=realloc(stack,sizeof(stack));
		printf("%d",sizeof(stack));
		*(stack+ptr)=data;
		ptr++;*/
		printf("\nStack Overflow\n");
	}
	else
	{
		ptr++;
		*(stack+ptr)=data;
	}
}

void display()
{
	int i;
	if(ptr==-1)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("\nStack: ");
		for(i=0;i<=ptr;i++)
		{
			printf("%d ",*(stack+i));
		}
		printf("\n");
	}
}

int pop()
{
	return;
}
