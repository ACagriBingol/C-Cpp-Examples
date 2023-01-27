#include <stdio.h>
int ReverseNumber(int in);
int main()
{
    int result;
	int in;
    printf("Enter an integer: ");
    scanf("%d", &in);
	result=ReverseNumber(in);
 
    printf("Reversed Number = %d", result);

    return 0;
}

int ReverseNumber(int n){

	int reversedNumber = 0, remainder;	
	
	
	 while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    
    return reversedNumber;
    
}



