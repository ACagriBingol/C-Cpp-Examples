#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "Ahmet");
   strcpy(str2, "Bhmet");

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   printf("\n%d",ret);
   return(0);
}
