/*Develop a program to print star pattern for given row and column values.
You read row and column values from the user.

row=5, column=3

***
***
***
***
***

row=2, column=6

******
******


C program to print rectangle star pattern

 */

#include <stdio.h>

int main()
{
    int i, j, row, col;

    /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &row);
	
	printf("Enter number of columns: ");
    scanf("%d", &col);

    /* Iterate through row rows */
    for(i=1; i<=row; i++)
    {
        /* Iterate over col columns */
        for(j=1; j<=col; j++)
        {
            /* Print star for each column */
            printf("*");
        }
        
        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}
