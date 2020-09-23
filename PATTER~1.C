//pattern matching programm using c
#include <stdio.h>
#include <string.h>
#include <conio.h>
int as_val(char []);
int ptt_mat(int,int,int,char []);
void main()
{
char str2[10],str1[50];
int result,asval,len1,len2;
printf("Enter Some Text:");
scanf("%[^\n]s",str1);
printf("Enter a String to find:");
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1>len2)
{
asval=as_val(str2);
result=ptt_mat(asval,len1,len2,str1);
if(result==-1)
printf("\nPattern Not Found");
else printf("\nPattern found at position %d",result);
}else printf("\nPattern Not Found");
getch();
clrscr();
}
int ptt_mat(int asval,int len1,int len2,char str[])//function to find pattern
{
int i,k,j,temp=0;
for(i=0;i<=len1-len2;i++)
{
	k=i;
	for(j=0;j<len2;j++,k++)
	   temp+=str[k];
	if (temp==asval)
		return i+1;
	temp=0;
}
return -1;
}
int as_val(char str[])//to find the total ascii value of the string
{
int re=0,i;
for(i=0;str[i]!='\0';i++)
	re+=str[i];
return re;
}