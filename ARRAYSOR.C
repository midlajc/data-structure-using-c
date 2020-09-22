//string sorting using bubble sort algorithm
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char string[100],temp;
int i,array_length;
printf("insert a string (100 elements limit):");
scanf("%s",string);
printf("\ninserted string:%s",string);
array_length=strlen(string);
for(i=0;i<array_length;i++)
{
int j;
for(j=0;j<array_length-1;j++)
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

