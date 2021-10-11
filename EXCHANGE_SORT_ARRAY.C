#include <stdio.h>
// #include <conio.h>

int main()
{
	int array[20],num,i,j,temp;
	// clrscr();
	printf("Enter Number of Elemets: ");
	scanf("%d",&num);
	printf("Enter Elements to Array: ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}	
	}
	printf("Sorted Array: ");
	for(i=0;i<num;i++)
	{	
		printf("%d ",array[i]);
	}
	// getch();
}
