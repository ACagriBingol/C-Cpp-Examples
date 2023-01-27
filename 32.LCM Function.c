#include <stdio.h>
void LCM(int in1,int in2);
int minMultiple;
int main()
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
	LCM(n1,n2);
    // maximum number between n1 and n2 is stored in minMultiple
    printf("The LCM of %d and %d is %d.", n1, n2,minMultiple);
    return 0;
}

void LCM(int in1,int in2){

minMultiple = (in1>in2) ? in1 : in2;

    // Always true
    while(1)
    {
        if( minMultiple%in1==0 && minMultiple%in2==0 )
        {
            
            break;
        }
        ++minMultiple;
    }
    
	
}






