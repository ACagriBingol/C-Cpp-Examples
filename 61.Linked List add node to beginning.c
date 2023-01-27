#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
}Node;

typedef Node *NodePtr;

int main(){

Node *Head = NULL;
Head = malloc(sizeof(Node));
Head->val=10;
Head->next=NULL;

printList(&Head);

add_val_to_the_beginning(&Head,20);
add_val_to_the_beginning(&Head,30);
add_val_to_the_beginning(&Head,40);
add_val_to_the_beginning(&Head,50);
add_val_to_the_beginning(&Head,60);

printf("\n\nAfter adding new elements");
printList(&Head);


	
return 0;
}

void printList(Node ** headNode){
	Node *iter;
	iter=*headNode;
		
	while(iter !=NULL ){		
	printf("\n%d",iter->val);
	iter=iter->next;			
	}		
}


void add_val_to_the_beginning(Node **head, int a) {
 //  if((*head)==NULL)
   //{
   	//(*head)->val=a;
   	//(*head)->next=NULL;
   //}
   //else{
    NodePtr basagelecek;
    basagelecek=malloc(sizeof(Node)); 
    basagelecek->val=a;
    basagelecek->next=(*head);
    (*head)=basagelecek;
  //}
    }
