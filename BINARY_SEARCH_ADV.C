#include <stdio.h>
#include <unistd.h>

int first = 0, last = 13, search = 1;
int array[] = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9, 10};
int getRight(int *, int, int, int);
int getLeft(int *, int, int, int);
// int getMiddle(int currentFirst,int currentLast)
// {
// 	float middle=(currentFirst+currentLast)/2;
// 	if(middle)
// 	return (int)middle;
// }

int main()
{
	int currentFirst = first, middle, currentLast = last;

	//clrscr();
	/*printf("Enter Size of Array:");
	scanf("%d",&last);
	printf("Enter Elements into Array (Sorted Order):");
	for(first=0;first<last;first ++)
		scanf("%d",&array[first]);
	printf("Enter Search Element:");
	scanf("%d",&search);*/
	first = 0;
	currentLast -= 1;
	// middle = getMiddle(first,last);
	middle = (first + last) / 2;
	//printf("\nElement Found B/W position: %d - %d",first,last);
	while (first <= last)
	{
		if (array[middle] == search)
		{
			// printf("\nF-L: %d - %d", first, last);
			printf("\n%d %d %d", first, last, middle);
			// first = getLeft(array, first, middle, search);
			// last = getRight(array, middle, last, search);
			break;
		}
		else if (array[middle] > search)
		{
			last = middle - 1;
			middle = (first + last) / 2;
			printf(" %d",middle);
			// sleep(2);
		}
		else
		{
			first = middle + 1;
			middle = (first + last) / 2;
			// printf(" %d",middle);
			// sleep(2);
		}
	}
	if (first == last)
		printf("\nElement Found at position: %d", first + 1);
	else if (first > last)
		printf("Element not found");
	else
		printf("\nElement Found B/W position: %d - %d", first + 1, last + 1);
	return 0;
	//getch();
}

int getLeft(int *array, int first, int last, int search)
{
	if (first == last)
	{
		return first;
	}
	int middle = (first + last) / 2;
	//printf("\nLeft F-M-L:%d - %d - %d",first,middle,last);
	if (*(array + first) != search)
	{
		if (*(array + middle) == search)
		{
			first = getLeft(array, first, middle, search);
		}
		else if (*(array + middle) < search)
		{
			first = getRight(array, middle, last, search);
		}
	}
	return first;
}

int getRight(int *array, int first, int last, int search)
{
	if (first == last)
	{
		return first;
	}
	int middle = (first + last) / 2;
	//printf("\nRight F-M-L:%d - %d - %d",first,middle,last);
	if (*(array + last) != search)
	{
		if (*(array + middle) == search)
		{
			last = getRight(array, middle, last, search);
		}
		else if (*(array + middle) > search)
		{
			last = getLeft(array, first, middle, search);
		}
	}
	return last;
}
