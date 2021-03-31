#include <stdio.h>
#include <conio.h>

void insert();
void search();
void traversal(struct tree *);

struct tree{
	int data;
	struct tree *l;
	struct tree *r;
}*root=NULL;

void main()
{
	int choice;
	clrscr();
	printf("**---Binary Search Tree---**\n");
	while(1)
	{
		printf("\n1.Insert\n");
		printf("2.Search\n");
		printf("3.Traversal\n");
		printf("4.Exit\n");
		printf("Enter your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				search();
				break;
			case 3:
				printf("\nTree Elemets: ");
				traversal(root);
				printf("\n");
				break;
			case 4:
				exit(0);
		}
	}
}

void insert()
{
	struct tree *temp=(struct tree *)malloc(sizeof(struct tree)),*ptr;
	printf("\nEnter a Number:");
	scanf("%d",&temp->data);
	temp->l=temp->r=NULL;
	if(root==NULL)
		root=temp;
	else
	{
		ptr=root;
		while(1)
			if((temp->data>ptr->data)||(temp->data==ptr->data))
				if(ptr->r==NULL)
				{
					ptr->r=temp;
					break;
				}
				else
					ptr=ptr->r;
			else
				if(ptr->l==NULL)
				{
					ptr->l=temp;
					break;
				}
				else
					ptr=ptr->l;
	}
}

void search()
{
	int flag=0,search;
	struct tree *temp=root;
	printf("\nEnter Search Element: ");
	scanf("%d",&search);
	while(temp!=NULL)
	{
		if(temp->data==search)
		{
			flag=1;
			printf("\n%d value Found\n",search);
			break;
		}
		else if(temp->data<search)
		{
			temp=temp->r;
		}
		else
		{
			temp=temp->l;
		}
	}
	if(flag==0)
	{
		printf("\nSearch Element not Found\n");
	}
}

void traversal(struct tree *node)
{
	if(root==NULL)
		printf("\nNo elements found in tree\n");
	else
	{
		//printf("%d ",node->data);
		if(node->l!=NULL)
			traversal(node->l);
		printf("%d ",node->data);
		if(node->r!=NULL)
			traversal(node->r);
		//printf("%d ",node->data);
	}
}
