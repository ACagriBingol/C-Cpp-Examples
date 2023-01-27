
Q.3.Define an array fill it with entered numbers, Sort the array in ascending order, then print it. 

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE];
    int size; 
    int i, j, temp;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    fillArray(array,size);
	SortArray(array,size);
    
    /* Print the sorted array */
    printf("\nElements of array in sorted ascending order: \n");
	printArray(array,size);

    return 0;
}


void fillArray(int a[],int size){
int i;
for(i=0; i<size; i++)
    {
    	printf("Enter the %d. element of the array",i);
        scanf("%d", &a[i]);
    }
}



void printArray(int a[],int size){
	
	int j;	
		
	 for (j = 0; j < size; j++ ) 
      printf("Element[%d] = %d\n", j, a[j] );
		
	
}


void SortArray(int array[],int size){
	int i,j,temp;
	
	
	for(i=0; i<size; i++)
    {
        
        for(j=i+1; j<size; j++)
        {
            
            if(array[i] > array[j])
            {
                temp     = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

}


