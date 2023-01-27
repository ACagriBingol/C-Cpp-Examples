#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int stack2[100];
char queue[100];
int top=-1;
int front=0,end=-1;
void push_stack(char x, char arr[])
{
top++;
arr[top]=x;
printf("%c pushed to stack\n",x);
}
void push_queue(char x)
{
end++;
queue[end]=x;
printf("%c enqueued to queue\n",x);
}
char pop_stack(char arr[])
{
return arr[top--];
}
int precedence(char symbol)
{
if(symbol == '^')
return 3;
else if(symbol == '*' || symbol == '/')
return 2;
else if(symbol == '+' || symbol == '-')
return 1;
}
void handToComp(char handParse[])
{
int l=strlen(handParse);
int x;
for(x=0;x<l;x++)
{
if(handParse[x]==' ')
continue;
if(handParse[x]=='(')
push_stack(handParse[x],stack);
else if(isdigit(handParse[x]))
push_queue(handParse[x]);
else if(handParse[x]==')')
{
while(stack[top]!='(')
{
char op = pop_stack(stack);
push_queue(op);
}
char op=pop_stack(stack);
}
else
{
while(top!=-1&&precedence(handParse[x])<precedence(stack[top]))
{
char op = pop_stack(stack);
push_queue(op);
}
push_stack(handParse[x],stack);
}
}
while(top!=-1)
{
char op = pop_stack(stack);
push_queue(op);
}
}
void evaluateComp()
{
int l=strlen(queue);
int x,val; top=-1;
for(x=0;x<l;x++)
{
if(isdigit(queue[x])) push_stack(queue[x]-'0',stack2);
else
{
int  second=pop_stack(stack2); int  first=pop_stack(stack2); 

switch(queue[x])
{
case '+':
val=first+second; break;

case '-':
val=first-second; break;

case '*':
val=first*second; break;

case '/':
val=first/second; break;

case '^':
val=first^second; break;

}
push_stack(val,stack2);
}
}
printf("Result  is:%d\n",pop_stack(stack2));
}
int main()
{
printf("Enter  string\n"); 
char  handParse[100]; 
scanf("%s",handParse); 
handToComp(handParse); 
printf("%s\n\n",queue); 
evaluateComp();
}

