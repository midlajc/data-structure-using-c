#include <stdio.h>
#include <stdlib.h>

void eval(char);

int stack[20],top=-1;

void push(int data)
{
	stack[++top]=data;
}
int pop()
{	
	return stack[top--];
}

void main()
{
	char exp[30];
	int i;
	clrscr();
	printf("Enter Postfix Expression:");
	scanf("%s",exp);
	for(i=0;exp[i]!='\0';i++)
	{
		eval(exp[i]);
	}
	printf("\nResult of %s Expession=%d",exp,pop());
	getch();
}

void eval(char ope)
{
	int ope1,ope2,result;
	if(ope>47&&ope<58)
		push(ope-48);
	else
	{
		ope1=pop();
		ope2=pop();
		switch(ope)
		{
			case '+':result=ope1+ope2;
					break;
			case '-':result=ope2-ope1;
					break;
			case '*':result=ope1*ope2;
					break;
			case '/':result=ope2/ope1;
					break;
		}
		push(result);		
	}	
}
