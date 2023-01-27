#include <stdio.h>
int gcd(int in1,int in2);
int i;


int main()
{
	int n1, n2,result_of_function;
   	printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    
    result_of_function=gcd(n1,n2);

    printf("G.C.D of %d and %d is %d", n1, n2, result_of_function);

    return 0;
}

int gcd(int in1,int in2){
	  int gcd;
	  
	  for(i=1; i <= in1 && i <= in2; ++i)
    {
        // Checks if i is factor of both integers
        if(in1%i==0 && in2%i==0)
            gcd = i;
    }
    
    return gcd;
    
	
}


