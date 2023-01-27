#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

/*give the correct parameters for the function prototype*/
void countLetters(char arr[], int size, int *numOfLower, int *numOfUpper);

int main(){
    char arr[MAX_SIZE], ch;
    int size = 0, numOfLower, numOfUpper;
    /* read the characters to array */
    scanf("%c",&ch);
    while (ch != '%') {
    	arr[size] = ch;
    	size++;
    	scanf("%c",&ch);
    }
    countLetters(arr, size, &numOfLower, &numOfUpper);
    /* print results */
    printf("%d %d\n", numOfLower, numOfUpper);
    return 0;
}
/*Function has no return, do not change the return type, do not return anything!*/
void countLetters(char arr[], int size, int *numOfLower, int *numOfUpper) {
	int i;
	*numOfLower = 0;
	*numOfUpper = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			(*numOfLower)++;
		}
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			(*numOfUpper)++;
		}
	}
}
