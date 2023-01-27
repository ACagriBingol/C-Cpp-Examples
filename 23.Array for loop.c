Q.0. Initialize an array during declaration , print all elements without loop and with loop, insert some elements and print it again

#include <stdio.h>

int main()
{
int test_array[5] = {19, 10, 8, 17, 9};
// int test_array[] = {19, 10, 8, 17, 9};

printf("\n%d",test_array[0]);
printf("\n%d",test_array[1]);
printf("\n%d",test_array[2]);
printf("\n%d",test_array[3]);
printf("\n%d",test_array[4]);


int i;
for(i=0;i<5;i++){
	printf("\n%d",test_array[i]);
}

//Insert
printf("\n Please enter two numbers that you want to insert as second and third");
scanf("%d %d", &test_array[2],&test_array[3]);


//Our new array
for(i=0;i<5;i++){
	printf("\n%d",test_array[i]);
}

}
