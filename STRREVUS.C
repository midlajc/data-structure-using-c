#include <stdio.h>
#include <string.h>
int main()
{
    char string[30], rev_string[30];
    int i;
    printf("Enter a String:");
    scanf("%[^\n]s", string);
    strlen(string);
    for (i = 0; *string+i!='\0'; i++)
    {
        rev_string[strlen(string)-i-1] = *string+i;
    }
    rev_string[i] = '\0';
    printf("\nreverse of enterd string: %s", rev_string);
}