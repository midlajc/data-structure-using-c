#include <stdio.h>
void main()
{
	int i,array[10],size,sear_ele;
	clrscr();
	printf("Enter number of elements:");
	scanf("%d",&size);
	printf("Enter Array Elements:");
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	printf("Enter Search Element:");
	scanf("%d",&sear_ele);
	for(i=0;i<size;i++)
		if(array[i]==sear_ele)
		{
			printf("Element Found at position %d",i+1);
			break;
		}
	if(i>size-1)
		printf("Element not Found");
	getch();
}