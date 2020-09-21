
// C program to demonstrate
// example of strcmpi() function

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main( )
{
   char str1[] = "Geeks" ;
   char str2[] = "geeks" ;

   int j = strcmpi( str1, str2 ) ;

   printf ( "The function returns = %d",j ) ;
   getche();
   return 0;
}

