#include <stdio.h>
int main(){
	int x=5;
	int *xPtr;
	xPtr=&x;
	
	printf("\nx = %d",x); // 5
	printf("\nxPtr = %d",xPtr);  // x address
	printf("\n*xPtr = %d",*xPtr); // 5
	printf("\nx = %d",*xPtr);  // 5
	
}
