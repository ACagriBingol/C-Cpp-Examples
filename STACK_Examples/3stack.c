#include <stdio.h>
#include <stdlib.h>

struct lifo 
{
	int value;
	struct lifo *next;
};
typedef struct lifo stack;
stack *top;

void push (stack **top, int element){
/* If malloc returns NULL, notify stack is full*/
/* Otherwise insert into stack*/
    stack *new;
	new = (stack *) malloc(sizeof(stack));
	if(new == NULL){
		printf ("\n Stack is full");
		exit(-1);
	}
	new->value = element; 
	new->next = *top;
	*top = new;


}

int main(){
    int el;
    scanf("%d",&el);
    push(&top,el);
    scanf("%d",&el);
    push(&top,el);
    printf("Top element is:%d\n",top->value);
}