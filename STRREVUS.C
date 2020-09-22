#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char string[100],rev_string[100];
char *temp;
int array_length,i,j;
printf("insert a string(limit 100):");
scanf("%[^\n]s",string);
array_length=strlen(string);
temp=string;
//printf("%c\n",*temp);
for(i=0,temp+=array_length-1;i<array_length;i++,temp--)
{
rev_string[i]=*temp;
}
rev_string[array_length+1]='\0';
printf("\n%s",rev_string);
getch();
clrscr();
}
