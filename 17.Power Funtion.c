
//Write a method that gives the POWER of the numbers you entered

#include <stdio.h>

int power(int base, int exponent);

int main(){
	
	int a,b,result;
	printf("Enter a number for base part:");
	scanf("%d",&a);
	printf("Enter a number for exponent part:");
	scanf("%d",&b);
	
	result=power(a,b);
	printf("\nResult of a^b is= %d",result);
	
		
}


int power(int base, int exponent) {

 
   int result=1,i;
 
	for(i=0;i<exponent;i++)
		result*=base;
 
   return result; 
}

