#include <stdio.h>
#define min(a,b) (a < b ? a : b)
#define max(a,b) (a > b ? a : b)
int main()
{
    int in1,in2;
    int result;

    printf("Enter two numbers: ");
    scanf("%d %d", &in1,&in2);
    result = min(in1,in2);
    printf("Min is = %d \n", result);
    
    result = max(in1,in2);
    printf("Max is = %d", result);
    

    return 0;
}



