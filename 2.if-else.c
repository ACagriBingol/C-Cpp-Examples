
//Read a number, state whether it is odd or even.

#include <stdio.h>

int main()
{
   int a;

   printf("Enter a number: ");
   scanf("%d", &a);
   if (a%2==0)
		printf("%d is an even number.\n", a);
	else
		printf("%d is a odd number.\n", a);
   return 0;
}
