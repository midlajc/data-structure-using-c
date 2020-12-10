#include <stdio.h>
#include <string.h>
void main()
{
    char string[100], rev_string[100];
    char *temp;
    int array_length, i;
    printf("insert a string(limit 100):");
    scanf("%[^\n]s", string);
    array_length = strlen(string);
    temp = string;
    for (i = 0, temp += array_length - 1; i < array_length; i++, temp--)
    {
        rev_string[i] = *temp;
    }
    rev_string[array_length] = '\0';
    printf("\nreverse of enterd string: %s", rev_string);
    getch();
    clrscr();
}