#include <stdio.h>
#include <conio.h>

void main()
{
	int array[20],num,i,j,temp,position;
	clrscr();
	printf("Enter Number of Elemets: ");
	scanf("%d",&num);
	printf("Enter Elements to Array: ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<(num-1);i++)
	{
		position=i;
		for(j=i+1;j<num;j++)
		{
			if(array[position]>array[j])
			{
				position=j;
			}
		}
		if(position!=i)
		{
			temp=array[i];
			array[i]=array[position];
			array[position]=temp;
		}	
	}
	printf("Sorted Array: ");
	for(i=0;i<num;i++)
	{	
		printf("%d ",array[i]);
	}
	getch();
}
