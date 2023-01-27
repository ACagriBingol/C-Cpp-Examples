#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int val;
	struct node *next;
}Node;
typedef Node* NodePtr;


int main(){
Node * Head = NULL;
Head = malloc(sizeof(Node));
Head->val=10;
Head->next=NULL;
printList(Head);
add_val_to_the_beginning(&Head,20);
add_val_to_the_beginning(&Head,30);
add_val_to_the_beginning(&Head,40);
add_val_to_the_beginning(&Head,50);
add_val_to_the_beginning(&Head,60);
printf("\n\nAfter adding new elements");
printList(Head);
remove_by_index(&Head,40);
printf("\n\nAfter removing first element");
printList(Head);
return 0;
}


void printList(Node * headNode){
	Node * iter;
	iter=headNode;		
	while(iter !=NULL ){		
	printf("\n%d",iter->val);
	iter=iter->next;			
	}
			
}
void add_val_to_the_beginning(Node ** head, int a) {
    NodePtr newNode;
    newNode=malloc(sizeof(Node));
    newNode->val=a;
    newNode->next= *head;
    *head=newNode;    
    }
    
void remove_by_index(Node ** sPtr, int n) {
    NodePtr previousPtr;
    NodePtr currentPtr;
    NodePtr tempPtr;
    //deleting first node
    if( n == (*sPtr)->val){
    	tempPtr=*sPtr;
    	*sPtr=(*sPtr)->next;
    	free(tempPtr);
	}
	else{
		previousPtr = *sPtr;
		currentPtr = (*sPtr)->next;
		while(currentPtr !=NULL && currentPtr->val != n){
			previousPtr = currentPtr;
			currentPtr = currentPtr->next;
		}
	//delete node at currentPtr
	if(currentPtr !=NULL){
		tempPtr = currentPtr;
		previousPtr->next=currentPtr->next;
		free(tempPtr);
	}		
	}
}
