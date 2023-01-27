#include <stdio.h>

int main() {
	
int *p;
p = calloc(15,sizeof(int));  
printf("%d",*p); 
p = realloc(p,sizeof(int)*5);
printf("%d",*p);
//free(p);

}



