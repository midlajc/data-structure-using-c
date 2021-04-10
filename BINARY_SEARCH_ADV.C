#include <stdio.h>

int getRight(int *,int,int,int);
int getLeft(int *,int,int,int);

int main()
{
	int first,middle,last,search;
	int array[10];
	clrscr();
	printf("Enter Size of Array:");
	scanf("%d",&last);
	printf("Enter Elements into Array (Sorted Order):");
	for(first=0;first<last;first ++)
		scanf("%d",&array[first]);
	printf("Enter Search Element:");
	scanf("%d",&search);
	first=0;
	last-=1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(array[middle]==search)
		{
			first=getLeft(array,last,first,search);
			last=getRight(array,first,last,search);
			break;
		}
		else if(array[middle]>search)
		{
			last=middle-1;
			middle=(first+last)/2;
		}
		else
		{
			first=middle+1;
			middle=(first+last)/2;
		}
	}
	printf("\nElement Found B/W position: %d - %d",first,last);
	if(first>last)
		printf("Element not found");
	return 0;
	getch();
}


int getLeft(int *array,int last,int first,int search)
{
	int middle=(first+last)/2;
	if(*(array+first)!=search)
	{
		if(*(array+middle)==search)
		{
			first=getLeft(array,middle,first,search);
		}
		else if(*(array+middle)<search)
		{
			first=getRight(array,first,middle,search);
		}
	}
	else
		return first+1;
}

int getRight(int *array,int first,int last,int search)
{
	int middle=(first+last)/2;
	if(*(array+last)!=search)
	{
		if(*(array+middle)==search)
		{
			last=getRight(array,first,middle,search);
		}
		else if(*(array+middle)>search)
		{
			last=getLeft(array,middle,first,search);
		}
	}
	else
		return last+1;
}

