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


printList(&Head);

add_val_to_the_beginning(&Head,20);
add_val_to_the_beginning(&Head,30);
add_val_to_the_beginning(&Head,40);
add_val_to_the_beginning(&Head,50);
add_val_to_the_beginning(&Head,60);

printf("\n\nAfter adding new elements");
printList(&Head);
printf("\n\nAfter removing last element");
remove_last(&Head);

printList(&Head);


	
return 0;
}

void printList(Node **headNode){
	Node *iter;
	iter=*headNode;
		
	while(iter !=NULL ){		
	printf("\n%d",iter->val);
	iter=iter->next;			
	}		
}

void remove_last(Node **head) {
	NodePtr q=NULL;
	q=*head;
	while(q->next->next != NULL)
	{
		q=q->next;
	}
	free(q->next);
	q->next=NULL;
	}

void add_val_to_the_beginning(Node ** head, int a) {
   
    NodePtr newNode;
    newNode=malloc(sizeof(Node));
    
    newNode->val=a;
    newNode->next= *head;
    *head=newNode;    
    }
    
    
 /*
void remove_last(Node * head) {
    int retval = 0;
    
    //if there is only one item in the list, remove it 
    if (head->next == NULL) {
        free(head);
    }
   // get to the second to last node in the list 
    Node * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    //now current points to the second to last item of the list, so let's remove current->next
    free(current->next);
    current->next = NULL;

}
*/
