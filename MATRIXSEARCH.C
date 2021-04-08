#include <stdio.h>
void main()
{
	int array[20][20],m,n,sear_ele,flag=1,i,j;
	clrscr();
	printf("Enter order of matrix:");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		printf("Enter Elements to row %d:",i+1);
		for(j=0;j<n;j++)
			scanf("%d",&array[i][j]);
	}
	printf("\n Search Element:");
	scanf("%d",&sear_ele);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(sear_ele==array[i][j])
			{
				flag=0;
				printf("\nelement Found at position (%dx%d)",i+1,j+1);
			}
	if(flag==1)
		printf("Element not Found");
	getch();
}
