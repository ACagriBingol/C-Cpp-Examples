#include <stdio.h>

typedef struct node {
	int val;
	struct node *next;
	
}Node;
typedef Node* NodePtr;

int main(){

NodePtr head = NULL;

head = malloc(sizeof(Node));
head->val = 1;

head->next = malloc(sizeof(Node));
head->next->val = 2;
//head->next->next = NULL;

head->next->next= malloc(sizeof(Node));
head->next->next->val = 3;
head->next->next->next = NULL;


printList(head);

//(*(head->next)).val=5;(head->next)->val=6;


return 0;
}

void printList(Node *headNode){
	Node *iter;
	iter=headNode;
	while(iter !=NULL )
	{
	printf("%d ",iter->val);
	iter=iter->next;		
	}	
}
