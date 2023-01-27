//Search the specific element in the array with SEARCH Function

#include <stdio.h>
#define LENGTH 10

void printArray(int[]);

 
int main () {	

   int main_array[LENGTH];
   int i;
   int key;
  
  	fillArray(main_array);
	  
	printArray(main_array);
	
	scanf("%d",&key);
	
	printf("\n\n8 is the %d. element of this array",linearSearch(main_array, key, LENGTH));
	
	
	
	
	
   return 0;
}

void fillArray(int n[]){
	int i;
	n[0]=2;
   for ( i = 1; i < LENGTH; i++ ) 
      n[ i ] = n[i-1]*2; 
			
} 




void printArray(int a[]){
		int j;	
		
	 for (j = 0; j < LENGTH ; j++ ) 
      printf("Element[%d] = %d\n", j, a[j] );
			
} 
 

int linearSearch(int array[], int key, int size)
{
	int n;


for (n = 0; n < size; ++n) {
if (array[n] == key) {
return n; // return location of key
}
}
return -1; // key not found
} 		
 
 
 


