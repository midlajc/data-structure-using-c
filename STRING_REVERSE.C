#include <stdio.h>
#include <string.h>
void main()
{
	char string[10];
	int i;
	clrscr();
	printf("Eneter a String:");
	gets(string);
	printf("\nreverse:");
	for(i=strlen(string)-1;i>=0;i--)
		printf("%c",*(string+i));
	getch();
}