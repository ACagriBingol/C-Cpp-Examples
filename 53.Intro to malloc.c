#include <stdio.h>

int main()
{
	int *Aptr;
	Aptr=malloc(sizeof(int)*5);
	
	printf("\n%p",Aptr);

    return 0;
}
