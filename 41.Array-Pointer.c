#include <stdio.h>
int main(){

int data[5],x;


	printf("%d\n",data);
	scanf("\n%d",&x);
	
	printf("\nEnter the first element:");
	scanf("%d",&data[0]);
	printf("\nThe first element of the array is=%d",data[0]);
	
	printf("\nEnter the first element:");
	scanf("%d",data);
	printf("\nThe first element of the array is=%d",*data);
	
	printf("\nEnter the second element:");
	scanf("%d",data+1);
	printf("\nThe second element of the array is=%d",*(data+1));
	
	
	
	printf("\ndata = %d",x);
	//printf("\ny = %d",y);
	//printf("\n*y = %d",*y);
	
	
}
