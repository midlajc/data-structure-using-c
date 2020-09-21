#include <stdio.h>
#include <conio.h>
void main()
{
  int array[6]={1,2,3,4,5,6};
  int i;
  printf("Existing Array:");
  for(i=0;i<6;i++)
  {
    printf("\t%d",array[i]);
  }
  printf("\n\nEnter position of number to be replaced:");
  scanf("%d",&i);
  printf("Enter the new Number:");
  scanf("%d",&array[i-1]);
  printf("\nNew Array:");
  for(i=0;i<6;i++)
  {
    printf("\t%d",array[i]);
  }
getch();
clrscr();
}