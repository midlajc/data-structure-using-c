//program to arrange name in alphebetical order (strcmp,strcat,strcpy,strrev)
#include <stdio.h>
#include <string.h>
int main()
{
int num,i,j;
printf("Enter Total number of Students:");
scanf("%d",&num);
char name[num][30],f_name[num][25],s_name[num][10],temp[30];;
for(i=0;i<num;i++)
{
	printf("Student %d\nFirst Name:",i+1);
	scanf("%s",f_name[i]);
	printf("Second Name:");
	scanf("%s",s_name[i]);
}
for(i=0;i<num;i++)//strcat() 
{
	strcat(name[i],f_name[i]);
	strcat(name[i]," ");
	strcat(name[i],s_name[i]);
}
for(j=1;j<num;j++)
{
	for(i=1;i<num;i++)
	{
		if(strcmp(name[i-1],name[i])>0)//strcpy()&strcmp
		{
			strcpy(temp,name[i-1]);
			strcpy(name[i-1],name[i]);
			strcpy(name[i],temp);
		}	
	}	
}
printf("Name's in Alphabetical Order\n");	
for(i=0;i<num;i++)
	printf("%d.%s\n",i+1,name[i]);
char text[9]={"C jaldiM"};//strrev
printf("\n\n--%s",strrev(text));	
}	
