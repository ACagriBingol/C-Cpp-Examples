#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N, sum=0;
    int *ageArr;
    float avg;

    /*Read the number of students*/
    scanf("%d", &N);
  
    /*Allocate a block of memory for N ages using malloc*/
    ageArr = (int *)malloc(N * sizeof(int));
    
    /*Read ages one by one from the console and calculate sum*/
    for (i=0; i<N; i++){
        scanf("%d", &ageArr[i]);
        sum += ageArr[i];
    }
    
    /*Calculate the average age*/
    avg = sum / (float) N;    

    /*Print the ages below the average*/
    for(i=0;i<N;i++)
        if (ageArr[i]<avg)
            printf("%d ",ageArr[i]);
     printf("\n");
    
    /*Deallocate memory*/ 
    free (ageArr);
    return 0;
}

