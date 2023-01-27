#include <stdio.h>
int main(){
	int x=5;
	int *xPtr;
	xPtr=&x;	
	printf("%d",*&x);	
}
