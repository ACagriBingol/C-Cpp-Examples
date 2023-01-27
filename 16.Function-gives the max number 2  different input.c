
// Write a method that gives the MAX of the numbers you entered 2 different numbers

#include <stdio.h>

int max(int num1, int num2);

int main(){
	
	int first,second,bigger_number;
	printf("Enter a number:");
	scanf("%d",&first);
	printf("Enter a number:");
	scanf("%d",&second);
	
	bigger_number=max(first,second);
	printf("\nGreater number is= %d",bigger_number);
	
		
		
}

int max(int num1, int num2) {

 
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}







