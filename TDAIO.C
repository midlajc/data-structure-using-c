#include <stdio.h>
void dis(int array[2][3]);
void main()
{
  int i, j, array[2][3];
  for (i = 0; i < 2; i++)
  {
    printf("Enter elements of row %d:", i + 1);
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }
  dis(array);
  getch();
  clrscr();
}
void dis(int array[2][3])
{
  int i, j;
  printf("Matrix:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d\t", array[i][j]);
    printf("\n\n");
  }
}
