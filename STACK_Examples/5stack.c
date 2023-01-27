#include stdio.h
#include stdlib.h
#include string.h

#define MAXSIZE 100
char inputS[MAXSIZE];

struct lifo 
{
	char st[MAXSIZE];
	int top;
};
typedef struct lifo stack;
stack s;

void push (stack s, int element){
	if (s-top == (MAXSIZE-1)){
		printf (n Stack overflow);
		exit(-1);
	}
	else{
		s-top ++;
		s-st[s-top] = element;
	}
}
int pop (stack s){
    Pop if stack is not empty
	return (s-st[s-top--]);
	
}
int isEmpty(stack s){
    if(s-top==-1)
        return 1;
    else
        return 0;
}
void create(stack s){
    s-top=-1;
}

int main(){
    scanf(%s,inputS);
    int len=strlen(inputS);
    int i;
    for(i=0;ilen2;i++){
        push(&s,inputS[i]);
    }
    if(len%2==1)
    i++;
    while(ilen){
        int top=pop(&s);
        if(top!=inputS[i]){
            printf(Text is not palindrome!n);
        return 0;
        }
    i++;   

    }
    printf(Text is palindrome!n);
}
