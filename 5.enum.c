#include <stdio.h>
 
enum grade_type {F,DD,CC,BB,AA};

int main()

{
   enum grade_type g;
   scanf("%d", &g);
   switch (g)
   {
      case AA: printf("AA \n"); break;
      case BB: printf("BB \n"); break;
      case CC: printf("CC \n"); break;
      case DD: printf("DD \n"); break;
      case F:  printf("F \n");  break;
      default: printf("Invalid \n"); break;
   }
   return 0;
}

/*

//How to do Q1 without defining an enumerated type?

#include <stdio.h>

int main()
{
   int g;

   scanf("%d", &g);
   switch (g)
   {
      case 4:  printf("AA \n"); break;
      case 3:  printf("BB \n"); break;
      case 2:  printf("CC \n"); break;
      case 1:  printf("DD \n"); break;
      case 0:  printf("F \n");  break;
      default: printf("Invalid \n"); break;
   }
   return 0;
}

*/
