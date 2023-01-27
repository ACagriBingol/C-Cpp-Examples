#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
	
}Node;

int main(){

Node *Head = NULL;
Head = malloc(sizeof(Node));
Head->val=10;
Head->next=NULL;

add_val_to_end(Head,20);

printList(Head);

add_val_to_end(Head,30);
add_val_to_end(Head,40);
add_val_to_end(Head,50);
add_val_to_end(Head,60);

printf("\n\nAfter adding new elements");
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


void add_val_to_end (Node * head, int a) {
    Node * current = head;
	    
    while (current->next != NULL) {
        current = current->next;
    }
    
    current->next = malloc(sizeof(Node));
    current->next->val = a;
    current->next->next = NULL;
    
    }


