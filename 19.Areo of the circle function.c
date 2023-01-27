// Write a C program that calculates Area of a Circle  
#include <stdio.h>
#define PI 3.1415
double circleArea(int r);
int main()
{
    int radius;
    float area;

    printf("Enter the radius: ");
    scanf("%d", &radius);
    area = circleArea(radius);
    printf("Area = %.2f", area);

    return 0;
}

double circleArea(int r){
	return r*r*PI;
}

/*
// with MACRO 
#include <stdio.h>
#define PI 3.1415
#define circleArea(r) (PI*r*r)

int main()
{
    int radius;
    float area;

    printf("Enter the radius: ");
    scanf("%d", &radius);
    area = circleArea(radius);
    printf("Area = %.2f", area);

    return 0;
}
*/

