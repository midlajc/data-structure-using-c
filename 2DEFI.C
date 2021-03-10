#include <stdio.h>
void main()
{
    int array[100][100], m, n, i, sear_ele, find = 1;
    printf("Enter base of matrix(M x N m&n limited to 100):");
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        int j;
        printf("\nenter elements to row %d(differentiate elements using space):", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nwhich element wanted to be searched:");
    scanf("%d", &sear_ele);
    for (i = 0; i < m; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (sear_ele == array[i][j])
            {
                find = 0;
                printf("\nElement founded at position %d x %d\n", i + 1, j + 1);
            }
        }
    }
    if (find == 1)
        printf("\nelement not founded");
    getch();
    clrscr();
}
