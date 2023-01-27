#include <stdio.h>

typedef struct node {
	int val;
	struct node *next;
	
}Node;

typedef Node* NodePtr;

int main(){	
//head2->val=5;(*head2).val=5;
Node *head2 = NULL;
head2 = malloc(sizeof(Node));
head2->val = 1;
head2->next = malloc(sizeof(Node));
head2->next->val = 2;
head2->next->next = NULL;
printf("%d ",head2->val);
printf("%d",head2->next->val);
return 0;
}



