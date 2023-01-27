#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

struct lifo 
{
	int st[MAXSIZE];
	int top;
};
typedef struct lifo stack;
stack s;

void push (stack *s, int element){
	if (s->top == (MAXSIZE-1)){
		printf ("\n Stack overflow");
		exit(-1);
	}
	else{
		s->top ++;
		s->st[s->top] = element;
	}
}
int pop (stack *s){
    /*Pop if stack is not empty*/
	return (s->st[s->top--]);
	
}
int isEmpty(stack *s){
    if(s->top==-1)
        return 1;
    else
        return 0;
}
void create(stack *s){
    s->top=-1;
}

int main(){
    create(&s);
    int el;
    scanf("%d",&el);
    push(&s,el);
    scanf("%d",&el);
    push(&s,el);
    while(!isEmpty(&s)){
        printf("%d ",pop(&s));
    }
}