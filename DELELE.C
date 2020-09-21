#include <stdio.h>
#include <conio.h>
void main()
{
  int array[6];
  int i,num;
  printf("Enter 6 Numbers(don't repeat same elements):");
  for(i=0;i<6;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("\nEnter a number to be Deleted:");
  scanf("%d",&num);
  for(i=0;i<6;i++)
  {
    if(num!=array[i])
      {
      if(i==5)
	{
	 printf("\nElement not found");
	 getch();
	 clrscr();
	 exit();
	}
       continue;
      }
    else
      break;
  }
  for(;i<6;i++)
  {
    array[i]=array[i+1];
  }
  printf("\nNew Array:");
  for(i=0;i<5;i++)
  {
    printf("\t%d",array[i]);
  }
getch();
clrscr();
}