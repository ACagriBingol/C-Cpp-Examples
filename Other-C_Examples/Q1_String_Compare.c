#include <stdio.h>
#include <string.h>

int main () {
   char str1[100];
   char str2[100];
   string str3[100];
   int ret;

   str3="Cagri";
   strcpy(str1, "Abdullah Ca");
   strcpy(str2, "Abdullah Cb");

   ret = strcmp(str1, str2);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   printf("\n%d",ret);
   printf("\n%s",str3);
   return(0);
}
