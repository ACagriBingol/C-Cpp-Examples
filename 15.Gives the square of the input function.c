
// Write a method that gives the SQUARE of the numbers you entered

#include <stdio.h>

int square(int y);

int main(){
	
	/*	
	printf("%d",square(5));
	*/
	
	
	/*
	int a=square(5);
	printf("%d",a);
	*/
	
	
	
	
	int in;
	int result;
	printf("Enter a number:");
	scanf("%d",&in);
	result=square(in);
	printf("%d",result);
	
	
		
}


int square(int y)
{
	return y * y;
}



