#include <stdio.h>
#include <conio.h>

void main()
{
	int array[20],num,i,j,key;
	clrscr();
	printf("Enter Number of Elemets: ");
	scanf("%d",&num);
	printf("Enter Elements to Array: ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<num;i++)
	{
		key=array[i];
		for(j=i-1;j>=0&&array[j]>key;j--)
		{
			array[j+1]=array[j];
		}
		array[j + 1] = key;
	}
	printf("Sorted Array: ");
	for(i=0;i<num;i++)
	{	
		printf("%d ",array[i]);
	}
	getch();
}
