#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100
char stack[SIZE];
int top=-1,top1=-1;
int stack1[SIZE];
void push1(int item){
if(top1>=SIZE-1){
printf("stack over..ow");
return;
}
else{
top1=top1+1;
stack1[top1]=item;
}
}
int pop1(){
int item;
if(top1<0){
printf("Stack under..ow");
}
else{
item=stack1[top1];
top1=top1-1;
return item;
}
}
void push(char item){
if(top>=SIZE-1)
printf("\nStack over..ow");
else{
top=top+1;
stack[top]=item;
}
}
char pop(){
char item;
if(top<0){
printf("invalid handparsing");
getchar();
exit(1);
}
else{
item=stack[top];
top=top-1;
return item;
}
}
void Eval(char computer[]){
int i;
char ch;
int val;
int A,B;
for(i=0;computer[i]!='\0';i++){
ch=computer[i];
if(isdigit(ch)){
push1(ch-'0');
}
else if(ch=='+' || ch=='-' || ch =='*' || ch=='/'){
A=pop1();
B=pop1();
switch(ch){
case '*':
val=B*A;
break;
case '/':
val=B/A;
break;
case '+':
val=B+A;
break;
case '-':
val=B-A;
break;
}
push1(val);
}
}
printf("\nResult is %d\n",pop1());
}
int is_operator(char symbol){
if(symbol =='^' || symbol=='*' || symbol=='/' || symbol=='+' || symbol=='-')
return 1;
else
return 0;
}
int precedence(char symbol){
if(symbol=='^')
return 3;
else if(symbol=='*')
return 2;
else if(symbol=='+')
return 1;
else
return 0;
}
void conversion(char hand[],char computer[]){
int i,j;
char item,x;
push('(');
strcat(hand,")");
i=0;
j=0;
item=hand[i];
while(item!='\0'){
if(item=='(')
push(item);
else if(isdigit(item) || isalpha(item)){
computer[j]=item;
j++;
}
else if(is_operator(item)==1){
x=pop();
while(is_operator(x)==1 && precedence(x)>=precedence(item)){
computer[j]=x;
j++;
x=pop();
}
push(x);
push(item);
}
else if(item==')'){
x=pop();
while(x!='('){
computer[j]=x;
j++;
x=pop();
}
}
else{
printf("\nInvalid Handparsing expression");
getchar();
exit(1);
}
i++;
item=hand[i];
}
if(top>0){
printf("\nInvalid Handparsing expression");
getchar();
exit(1);
}
computer[j]='\0';
}
int main(){
char hand[SIZE],computer[SIZE];
printf("\nEnter Handparsing expression");
scanf("%s",hand);
conversion(hand,computer);
puts(computer);
Eval(computer);
return 0;
}
