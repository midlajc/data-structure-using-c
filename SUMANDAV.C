#include <stdio.h>
#include <conio.h>
void main()
{
int num,i,sum=0;
float avg;
int mark[6];
printf("enter marks:");
for(i=0;i<6;i++)
{
   scanf("%d",&mark[i]);
}
for(i=0;i<6;i++)
   sum=sum+mark[i];
avg=sum/6.0;
printf("Sum:%d\nAverage:%f",sum,avg);
getch();
clrscr();
}
