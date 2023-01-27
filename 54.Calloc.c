#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
int main() {
   int *p,i;
   p =(int*)malloc(sizeof(int)*15);
   for(i=0;i<15;i++) {
      p[i]=0;
      printf("Ayrilan Bolgenin %d. Elemaninin adresi ---> %d\n",i+1,&p[i]);
   }
   getch();
}

*/

int main() {
   int *p,i;
   p = calloc(15,sizeof(int));
   for(i=0;i<15;i++) {
   printf("Ayrilan Bolgenin %d. Elemani ---> %d\n",i+1,&p[i]);
   }
   getch();
}
