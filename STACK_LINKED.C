 #include <stdio.h>
#include <stdlib.h>

void display();
void push(int);
int pop();


struct stack{
	int data;
	struct stack *next;
};

struct stack *top=NULL;

void main()
{
	int choice,data;
	clrscr();
	while(1)
	{
	      printf("\n");
	      printf("1.PUSH\n");
	      printf("2.POP\n");
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
			      printf("\nData:%d\n",data);
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
	struct stack *temp=NULL;
	temp=(struct stack *)malloc(sizeof(struct stack));
	temp->data=data;
	if(top==NULL)
	{
	      top=temp;
	}
	else
	{
	      temp->next=top;
	      top=temp;
	}
}


int pop()
{
	int data;
	struct stack *temp=top;
	if(top==NULL)
		printf("\nNo Elements Found\n");
	else
	{
		data=temp->data;
		top=top->next;
		free(temp);
	}
	return data;
}

void display()
{
	struct stack *temp=top;
	if(top==NULL)
		printf("\nNo Elements Found\n");
	else
	{
		printf("\nStack: %u",temp);
		while(temp!=NULL)
		{
			printf("->[%d,%u]",temp->data,temp->next);
			temp=temp->next;
		}
	}
}
