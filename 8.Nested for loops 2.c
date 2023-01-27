#include<stdio.h>
   
int main() {
   int i, j, rows;
   int count = 1;
     
   printf("Enter the number of rows\n");
   scanf("%d", &rows);
      
   for (i = rows; i >= 0; i--) {
      for (j = 1; j <= i; j++) {
         printf("%d ", i);
      }
      printf("\n");
   }
   return(0);
}
