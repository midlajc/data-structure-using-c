//string sorting using bubble sort algorithm
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char string[10],temp;
int i;
printf("insert a string (10 elements):");
scanf("%s",string);
printf("\ninserted string:%s",string);
for(i=0;i<10;i++)
{
int j;
for(j=0;j<9;j++)
{
if(string[j]>string[j+1])
{
temp=string[j];
string[j]=string[j+1];
string[j+1]=temp;
}
}
}
printf("\nstring in Ascending order:%s",string);
getch();
clrscr();
}

