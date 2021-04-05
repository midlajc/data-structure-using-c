#include <stdio.h>
#include <conio.h>

void swap(int *val1,int *val2)
{
	int temp;
	temp=*val1;
	*val1=*val2;
	*val2=temp;
}

int partition(int *array,int low,int high)
{
	int i=low-1,j=low;
	int pivot=*(array+high);
	for(;j<=high-1;j++)
	{
		if(*(array+j)<pivot)
		{
			i++;
			swap(array+i,array+j);
		}
	}
	swap((array+i+1),(array+high));
	return (i+1);	
}

void quicksort(int *array,int low,int high)
{
		int piv;
		if(low<high)
		{
			piv=partition(array,low,high);
			quicksort(array,low,piv-1);
			quicksort(array,piv+1,high);
		}
}

void main()
{
	int array[20],num,i;
	clrscr();
	printf("Enter Number of Elemets: ");
	scanf("%d",&num);
	printf("Enter Elements to Array: ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	
	quicksort(array,0,num-1);
	printf("Sorted Array: ");
	for(i=0;i<num;i++)
	{	
		printf("%d ",array[i]);
	}
	getch();
}

