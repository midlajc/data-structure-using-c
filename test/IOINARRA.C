#include <stdio.h>
void main()
{
    int num[3];
    printf("Enter two number:");
    scanf("%d%d", &num[0], &num[1]);
    num[2] = num[0] + num[1];
    printf("sum of two numbers:%d", num[2]);
    getch();
    clrscr();
}
