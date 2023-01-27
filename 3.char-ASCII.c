#include <stdio.h>

int main(){
    char input;
     
    printf("Enter a lower case character: \n ");
    scanf("%c",&input);
     
    //printf("%d \n",'a');
    //printf("%d \n",'a'-'A');
     
    printf("Upper Case is: %c \n",input - ('a'-'A'));
 	
 	return 0;
         
}
