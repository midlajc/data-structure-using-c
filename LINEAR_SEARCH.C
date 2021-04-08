#include <stdio.h>
void main()
{
	int i,array[10],size,sear_ele,flag=0;
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
			printf("Element Found at position %d\n",i+1);
			flag=1;
		}
	if(flag==0)
		printf("Element not Found");
	getch();
}
