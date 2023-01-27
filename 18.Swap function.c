//Write a method that swaps two numbers 

#include <stdio.h>
void swap(int a,int b);


int main()
{
    int m=22;
    int n=44;
    
    printf("Values before swap m=%d \nand n=%d",m,n);
    
	swap(m,n);
	
	printf("\n\nValues after swap function m=%d \nand n=%d",m,n);
	printf("\n\n\nAs you see the numbers doesn't change by PASS BY VALUE arguments '");
}

void swap(int a,int b)
{
	
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	printf("\n\nValues after swap in function m=%d \nand n=%d",a,b);
	
	
}
