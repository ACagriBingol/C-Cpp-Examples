#include <stdio.h>
#define cube(x) (x*x*x)

int main()
{
    int in;
    float result;

    printf("Enter a number: ");
    scanf("%d", &in);
    result = cube(in);
    printf("Cube = %.2f", result);

    return 0;
}
