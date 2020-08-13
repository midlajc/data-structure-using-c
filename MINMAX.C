#include <stdio.h>
#include <conio.h>
void main()
{
int i,high,low;
int mark[6];
printf("enter marks:");
for(i=0;i<6;i++)
{
   scanf("%d",&mark[i]);
}
high=mark[0],low=mark[0];
for(i=1;i<6;i++)
{
   if(high<mark[i])
   high=mark[i];
   if(low>mark[i])
   low=mark[i];
}
printf("Highest mark:%d\tLowest mark:%d",high,low);
getch();
clrscr();
}
