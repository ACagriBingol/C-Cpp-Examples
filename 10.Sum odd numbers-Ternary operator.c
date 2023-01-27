//Develop a program to find sum of odd numbers for a given range (from m to n)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, m, n, sum=0;

    /* Input range to find sum of odd numbers between given range*/
    printf("Enter lower limit: ");
    scanf("%d", &m);

	printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find the sum of all odd number */
	//we used ternary operator in initial statement of following for loop
    for(i=(m % 2 == 0 ? m+1 : m); i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of odd numbers = %d", sum);
    return 0;
}
