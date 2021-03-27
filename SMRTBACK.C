#include <stdio.h>
void main()
{
	int matrix[20][20]={0},triplet[200][3],m,n;
	int i,j,no_elements,row,column,value;
	clrscr();
	printf("Enter Matrix order:");
	scanf("%d%d",&m,&n);
	printf("Enter Number of Elemets:");
	scanf("%d",&no_elements);
	//printf("Triplet Representation:");
	printf("\nEnter row,column and value Respectively:");
	printf("\nrow\tcolumn\tvalue\n");
	for(i=0;i<no_elements;i++)
	{
		scanf("%d%d%d",&row,&column,&value);
		triplet[i][0]=row-1;
		triplet[i][1]=column-1;
		triplet[i][2]=value;
	}
	for(i=0;i<no_elements;i++)
	{
		matrix[triplet[i][0]][triplet[i][1]]=triplet[i][2];
	}
	printf("\nMatrix Representation:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",matrix[i][j]);
		printf("\n");
	}
	getch();
}