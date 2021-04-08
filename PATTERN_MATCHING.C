#include <stdio.h>
#include <string.h>
void main()
{
	char string[20],pattern[5];
	int i=0,j,string_length,pattern_length,flag=0;
	clrscr();
	printf("Enter a String:");
	gets(string);
	printf("Enter search pattern:");
	scanf("%s",pattern);
	string_length=strlen(string);
	pattern_length=strlen(pattern);
	while(i<=string_length-pattern_length)
	{
		for(j=0;pattern[j]!='\0';j++)
			if(string[j+i]!=pattern[j])
				break;
		if(pattern[j]=='\0')
		{
			printf("pattern found at position %d\n",i+1);
			i+=j;
			flag=1;
		}
		else
			++i;
	}
	if(flag==0)
		printf("pattern not found");
	getch();
}
