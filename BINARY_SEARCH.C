#include <stdio.h>
void main()
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
			printf("Element Found at position %d",middle+1);
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
	if(first>last)
		printf("Element not found");
	getch();
}