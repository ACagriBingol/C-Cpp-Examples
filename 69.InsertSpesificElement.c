#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
	
}Node;

typedef Node* NodePtr;

int main(){


Node * Head = NULL;


insert(&Head,30);
insert(&Head,10);
insert(&Head,50);
insert(&Head,40);
insert(&Head,60);

printList(Head);



	
return 0;
}

void printList(Node *headNode){
	Node *iter;
	iter=headNode;
		
	while(iter !=NULL ){		
	printf("\n%d",iter->val);
	iter=iter->next;			
	}		
}


void add_val_to_the_beginning(Node **head, int a) {
   
    NodePtr newNode;
    newNode=malloc(sizeof(Node));
    
    newNode->val=a;
    newNode->next= *head;
    *head=newNode;    
    }
    
void insert(Node **head,int num){
NodePtr prev;
NodePtr current;
NodePtr new;
new=malloc(sizeof(Node));
if(new!=NULL){
	new->val=num;
	new->next=NULL;
	current=(*head);
	prev=NULL;
	while(current!=NULL && num> current->val){
		prev=current;
		current=current->next;
	}
	if(prev==NULL){
	new->next=(*head);
	(*head) =new;
	}
	else
	{
	prev->next=new;
	new->next=current;
	}


}
else{
printf("Error");
}


}    
 /*   
void insert(Node **sPtr,int n){
	NodePtr newPtr;
	NodePtr previousPtr;
	NodePtr currentPtr;
	
newPtr=malloc(sizeof(Node));

if(newPtr !=NULL){
	
	newPtr->val = n;
	newPtr->next=NULL;
	
	currentPtr=*sPtr;
	previousPtr=NULL;
	
	while(currentPtr != NULL && (n>currentPtr->val) ){
		previousPtr=currentPtr;
		currentPtr=currentPtr->next;
	}  //we arrived the true node
	
	//insert new node at the beginning of list
	if(previousPtr == NULL){
		newPtr->next=*sPtr;
		*sPtr=newPtr;
	}
	
	else{
		previousPtr->next=newPtr;
		newPtr->next=currentPtr;
	}	
}
else	
printf( "%c not inserted. No memory available.\n", n );
}
*/


