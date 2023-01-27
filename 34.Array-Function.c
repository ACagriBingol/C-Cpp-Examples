//Fill the array with according to 2^n equation and print it with function

#include <stdio.h>


void printArray(int a[]);

 
int main () {

   int n[ 10 ];
   int i,j;
  
   //Filling with 2^n function
   
   n[0]=2;
   for ( i = 1; i < 10; i++ ) 
      n[ i ] = n[i-1]*2; 
      
   /*   
   for (j = 0; j < 10; j++ ) 
      printf("Element[%d] = %d\n", j, a[j] );   	
	*/
	
	
	  
	printArray(n);
   return 0;
}


void printArray(int a[]){
		int j;	
		
	 for (j = 0; j < 10; j++ ) 
      printf("Element[%d] = %d\n", j, a[j] );
		
	
}

