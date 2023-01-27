//Find the a^b using for loop.
//Find the factorial.

// a^b
#include <stdio.h>
int main()
{
	int a, b, result=1, i;
	scanf("%d %d", &a, &b);
	for (i=0; i<b; i++)
		result *= a;
   return 0;
}
////////////////////////////////////////////
//factorial
#include <stdio.h>
int main()
{
	int result=1, i, n;
	printf("Enter factorial number: ");
	scanf("%d", &n);
	for (i=n; i>0; i--)
		result *= i;
   return 0;
}

