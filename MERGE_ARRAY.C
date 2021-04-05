#include <stdio.h>
void getArray(int *array,int size)
{
	int i;
	for(i=0;i<size;i++)
		scanf("%d",array+i);
}
void display(int *array,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d ",*(array+i));
}
void mergeArray(int *array1,int *array2,int *result,int size1,int size2)
{
	int i,j;
	for(i=1;i<size1;i++)
		*(result+i)=*(array1+i);
	for(j=0;j<size2;i++,j++)
		*(result+i)=*(array2+i);
}
void main()
{
	int array1[10],array2[10],result[20];
	int size1,size2;
	clrscr();
	printf("Enter number of Elements (First Array):");
	scanf("%d",&size1);
	printf("Enter First array elements:");
	getArray(array1,size1);
	printf("Enter number of Elements(Second Array):");
	scanf("%d",&size2);
	printf("Enter Second array elements:");
	getArray(array2,size2);
	mergeArray(array1,array2,result,size1,size2);
	display(result,size1+size2);
	getch();
}
