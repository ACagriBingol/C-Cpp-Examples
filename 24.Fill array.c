#include <stdio.h>
 
int main () {

   int n[ 10 ];
   int i,j;
 
   //Filling with consecutive order 
	         
   for ( i = 0; i < 10; i++ ) 
      n[ i ] = i; 
   
   
 
   for (j = 0; j < 10; j++ ) 
      printf("Element[%d] = %d\n", j, n[j] );
   
   //Filling with 2^n function
   
   n[0]=2;
   for ( i = 1; i < 10; i++ ) 
      n[ i ] = n[i-1]*2; 
   
   

   for (j = 0; j < 10; j++ ) 
      printf("Element[%d] = %d\n", j, n[j] );
   
   
	//Filling with entered numbers
	
	for ( i = 0; i < 10; i++ ){
		printf("Please enter the %d. element of the array\n",i);
      scanf("%d",&n[i]); 
		
		}
   
   
 
   for (j = 0; j < 10; j++ ) 
      printf("Element[%d] = %d\n", j, n[j] );
   
 
   return 0;
}



