#include <stdio.h>
#include <stdlib.h>
void main()
{
	int triplet[100][3], matrix[20][20];
	int m, n, totalElements = 0, i, j, k,zero_count=0;
	clrscr() ;
	printf("Enter order of matrix:");
	scanf("%d%d", &m, &n);
	printf("\n");
	for (i = 0; i < m; i++)
	{
		printf("enter row %d values:", i + 1);
		for (j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j]==0)
				zero_count++;
		}
	}
	if(zero_count>(n*m/2))
	{
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (matrix[i][j] != 0)
			{
				triplet[totalElements][0] = i;
				triplet[totalElements][1] = j;
				triplet[totalElements][2] = matrix[i][j];
				totalElements++;
			}
		}
	}
	printf("\nTRIPLET REPRESENTATION\n\nrow\tcolumn\tvalue");
	for (i = 0; i < totalElements; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			(j < 2) ? printf("%d\t", triplet[i][j] + 1) : printf("%d\t", triplet[i][j]);
	}
	}
	else
		printf("\nGiven Matrix is not a Sparse Matrix");
	getch();
}
