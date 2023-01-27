#include <stdio.h>

typedef struct node {
	int val;
	struct node *next;
	
}Node;

void printList(Node *headNode);

int main(){

Node a1,a2,a3,a4;
a1.val=10;
a2.val=20;
a3.val=30;
a4.val=40;

a1.next=&a2;
a2.next=&a3;
a3.next=&a4;
a4.next=NULL;

printList(&a1);



	
return 0;
}

void printList(Node *headNode){
	Node *iter;
	iter=headNode;
	
	while(iter !=NULL ){
	printf("%d ",iter->val);
	iter=iter->next;	
	}	
}

