//program to arrange name in alphebetical order (strcmp,strcat,strcpy,strrev)
#include <stdio.h>
#include <string.h>
int main()
{
	int num, i, j;
	char name[20][25], temp[25];
	printf("Enter Total number of Students:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("Student %d Name:", i + 1);
		scanf("%[^\n]s", &name[i]);
	}
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			if (strcmp(name[j], name[j+1])<0) 
			{
				strcpy(temp, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], temp);
			}
		}
	}
	printf("Name's in Alphabetical Order\n");
	for (i = 0; i < num; i++)
		printf("%d.%s\n", i + 1, name[i]);
}


// //string sorting using bubble sort algorithm
// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char string[100], temp;
//     int i, array_length;
//     printf("insert a string (100 elements limit):");
//     scanf("%s", string);
//     printf("\ninserted string:%s", string);
//     array_length = strlen(string);
//     for (i = 0; i < array_length; i++)
//     {
//         int j;
//         for (j = 0; j < array_length - 1; j++)
//         {
//             if (string[j] > string[j + 1])
//             {
//                 temp = string[j];
//                 string[j] = string[j + 1];
//                 string[j + 1] = temp;
//             }
//         }
//     }
//     printf("\nstring in Ascending order:%s", string);
//     getch();
//     clrscr();
// }
