#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char* name;
	char* surname;
	struct node *next;
	struct node *sibling;
} Node;

typedef Node* NodePtr;

void printList(Node * headNode);
void insert(Node **sPtr, char name[], char surname[]);
void freeNode(Node * nd);
int delete(Node **sPtr, char name[], char surname[]);
int main() {
	Node * Head = NULL;

	char command[10], name_val[30], surname_val[30];
	command[0] = '\0';
	while (strcmp(command, "bye")) {
		scanf("%s", command);

		if (!strcmp(command, "insert")) {
			scanf("%s", name_val);
			scanf("%s", surname_val);
			insert(&Head, name_val, surname_val);
			printf("Name inserted %s %s \n", name_val, surname_val);
		}
		if (!strcmp(command, "delete")) {
			scanf("%s", name_val);
			scanf("%s", surname_val);
			if (delete(&Head, name_val, surname_val))
				printf("Person deleted %s %s \n", name_val, surname_val);
		}
		if (!strcmp(command, "print")) {
			printList(Head);

		}
	} /* while */

	printf("End session \n");
	return 0;
}


void printList(Node * headNode) {
	Node * iter;
	iter = headNode;

	while (iter != NULL) {

		Node *siter;
		siter = iter;
		while (siter != NULL) {
			printf("%s %s", siter->name, siter->surname);
		    if(siter->sibling!=NULL)
            printf("->");
			siter = siter->sibling;
		}
		printf("\n");
		iter = iter->next;
	}
}
void freeNode(Node * nd) {
	free(nd->name);
	free(nd->surname);
}
void insert(Node **sPtr, char name[], char surname[]) {
	NodePtr newPtr;
	NodePtr previousPtr;
	NodePtr currentPtr;

	newPtr = malloc(sizeof(Node));
	newPtr->name = (char*) malloc(strlen(name) * sizeof(char));
	newPtr->surname = (char*) malloc(strlen(surname) * sizeof(char));
	if (newPtr != NULL) {

		strcpy(newPtr->name, name);
		strcpy(newPtr->surname, surname);
		newPtr->next = NULL;
		newPtr->sibling = NULL;

		currentPtr = *sPtr;
		previousPtr = NULL;

		while (currentPtr != NULL && strcmp(name, currentPtr->name) > 0) {
			previousPtr = currentPtr;
			currentPtr = currentPtr->next;
		}  //we arrived the true name node (first dimension)
		if (currentPtr != NULL && strcmp(name, currentPtr->name) == 0) {
			// same name, add to sibling as surname ascending
			// traverse in surname, add to second dimension
			while (currentPtr != NULL
					&& strcmp(surname, currentPtr->surname) > 0) {
				previousPtr = currentPtr;
				currentPtr = currentPtr->sibling;
			}
			if (previousPtr != NULL) {
				if(previousPtr->sibling==currentPtr){
					previousPtr->sibling = newPtr;
					newPtr->sibling = currentPtr;
				}else{//previousPtr->next==currentPtr
					newPtr->sibling=currentPtr;
					newPtr->next=currentPtr->next;
					currentPtr->next=NULL;
					previousPtr->next=newPtr;
				}
			} else { // previous NULL,add to the first in name order
				newPtr->next = currentPtr->next;
				currentPtr->next = NULL;
				newPtr->sibling = currentPtr;
				*sPtr = newPtr;
			}
		} else {
			//insert new node at the beginning of list
			// name does not exist add to first dimension
			if (previousPtr == NULL) {
				newPtr->next = *sPtr;
				*sPtr = newPtr;
			} else {
				previousPtr->next = newPtr;
				newPtr->next = currentPtr;
			}
		}

	} else
		printf("%s%s not inserted. No memory available.\n", name, surname);
}
int delete(Node **sPtr, char name[], char surname[]) {
	NodePtr previousPtr = NULL;
	NodePtr currentPtr;
	currentPtr = *sPtr;
	if (currentPtr == NULL) {
		printf("List is empty \n");
		return (0);
	} else {
		while (currentPtr != NULL && strcmp(name, currentPtr->name) > 0) {
			previousPtr = currentPtr;
			currentPtr = currentPtr->next;
		}
		if (currentPtr == NULL) {
			printf("Person is not found \n");
			return (0);
		} else { // name found look for surname
			if (strcmp(surname, currentPtr->surname) == 0) { // first name node to be deleted
				if (currentPtr->sibling != NULL) {
					if (previousPtr != NULL) {
						previousPtr->next = currentPtr->sibling;
						currentPtr->sibling->next = currentPtr->next;
						freeNode(currentPtr);
						return (1);
					} else { // previousPtr == NULL
						// Deleting first node of name and first node of surname
						if (currentPtr->sibling == NULL) {
							*sPtr = currentPtr->next;
							freeNode(currentPtr);
							return (1);
						} else {
							currentPtr->sibling->next = currentPtr->next;
							*sPtr = currentPtr->sibling;
							freeNode(currentPtr);
							return (1);
						}

					}

				} else {
					if(previousPtr!=NULL){
					previousPtr->next = currentPtr->next;
					freeNode(currentPtr);
					return (1);
					}
					else{
						*sPtr = currentPtr->next;
						freeNode(currentPtr);
						return (1);
					}
				}
			} else {
				while (currentPtr != NULL
						&& strcmp(surname, currentPtr->surname) > 0) {
					previousPtr = currentPtr;
					currentPtr = currentPtr->sibling;
				}
				if (currentPtr != NULL
						&& strcmp(surname, currentPtr->surname) == 0) {
					previousPtr->sibling = currentPtr->sibling;
					freeNode(currentPtr);
					return (1);
				} else {
					printf("Person is not found \n");
					return (0);
				}

			}
		}
	}
}

