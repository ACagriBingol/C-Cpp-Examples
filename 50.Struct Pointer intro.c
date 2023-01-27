#include <stdio.h>
typedef struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1,person2;
    personPtr = &person1;            // Referencing pointer to memory address of person1

    printf("Enter integer: ");
    scanf("%d",&(*personPtr).age);

    printf("Enter number: ");
    scanf("%f",&(*personPtr).weight);

    printf("Displaying: ");
    printf("%d %.1f\n",(*personPtr).age,(*personPtr).weight);
    
    printf("%d %.1f",personPtr->age,personPtr->weight);
    
    printf("\n %p %p ",&person1,&person2);

    return 0;
}
