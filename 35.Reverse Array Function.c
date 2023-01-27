//Reverse the same array with REVERSE function

#include <stdio.h>
#define LENGTH 10

void printArray(int a[]);

 
int main () {

   int n[LENGTH];
   int i;
  
   //Filling with 2^n function
   
   n[0]=2;
   for ( i = 1; i < LENGTH; i++ ) 
      n[ i ] = n[i-1]*2; 
      
   /*   
   for (j = 0; j < 10; j++ ) 
      printf("Element[%d] = %d\n", j, a[j] );   	
	*/
	
	  
	printArray(n);
	
	printf("\n  \n After Reversed \n \n");
	
	ReverseArray(n);
	
	printArray(n);
	
	
	
	
	
	
   return 0;
}




void printArray(int a[]){
		int j;	
		
	 for (j = 0; j < LENGTH ; j++ ) 
      printf("Element[%d] = %d\n", j, a[j] );
			
} 
 
 
 
 
void ReverseArray(int array[]){
		int c,j;	
		int temp;
		
		
	for (c = 0; c < LENGTH/2; c++) {
    temp          = array[c];
    array[c]   = array[LENGTH-c-1];
    array[LENGTH-c-1] = temp;
 
  }	
		
}  


