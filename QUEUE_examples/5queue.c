#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	char name[30];
	int priority;
	struct node *next;
};
typedef struct node _QNODE;
typedef struct {
	_QNODE *queue_front, *queue_rear;
}_QUEUE;

_QNODE *enqueue (_QUEUE *q, char x[], int pri){
	_QNODE *temp;
	temp= (_QNODE *) malloc (sizeof(_QNODE));
	if (temp==NULL){
		printf("Bad allocation \n");
		return NULL;
	}
	strcpy(temp->name,x);
	temp->next=NULL;
	temp->priority=pri;
	if(q->queue_rear==NULL){
		q->queue_rear=temp;
		q->queue_front=q->queue_rear;
	}else{
	    _QNODE* cur=q->queue_front;
	    _QNODE* prev=NULL;
	    while((cur->priority<=pri)&&(cur->next!=NULL)){
	        prev=cur;
	        cur=cur->next;
	    }
	    if (cur==q->queue_rear&&cur==q->queue_front){
	        if(q->queue_rear->priority<=temp->priority){
    	        q->queue_rear->next=temp;
    		    q->queue_rear=temp;
	        }else{
	            q->queue_front=temp;
	            q->queue_front->next=q->queue_rear;
	        }
	    }
	    else if(cur==q->queue_rear){
	        if(q->queue_rear->priority<=temp->priority){
	            q->queue_rear->next=temp;
		        q->queue_rear=temp;
	        }else{
	            prev->next=temp;
	            temp->next=q->queue_rear;
	        }
	        
	    }else if(cur==q->queue_front){
	        
	            temp->next=q->queue_front;
	            q->queue_front=temp;
	        
	    }
	    else{
	        prev->next=temp;
	        temp->next=cur;
	    }
		
	}
	return(q->queue_rear);
}

char  *dequeue(_QUEUE *q,char x[])
{
	_QNODE *temp_pnt;
	if(q->queue_front==NULL){
		q->queue_rear=NULL;
		printf("Queue is empty \n");
		return(NULL);
	}else{
		strcpy(x,q->queue_front->name);
		temp_pnt=q->queue_front;
		q->queue_front=q->queue_front->next;
		free(temp_pnt);
		if(q->queue_front==NULL) 
			q->queue_rear=NULL;
		return(x);
	}
}

void init_queue(_QUEUE *q){
	q->queue_front= q->queue_rear=NULL;
}
void print_queue(_QUEUE *q){
    _QNODE *t=q->queue_front;
    while(t!=NULL){
        printf("%s %d\n",t->name, t->priority);
        t=t->next;
    }
    printf("Front: %s %d \n",q->queue_front->name,q->queue_front->priority);
    printf("Rear: %s %d \n",q->queue_rear->name,q->queue_rear->priority);
}
int isEmpty(_QUEUE *q){
	if(q==NULL) 
		return 1;
	else 
		return 0;
}

int main()
{
	char command[10],val[30];
	_QUEUE q;
	init_queue(&q);
	command[0]='\0';
	printf("For entering a name use 'enter <name> <priority>'\n");
	printf("For  deleting  use 'delete' \n"); 
	printf("To end the session use 'bye' \n");
	int prio;
	while(strcmp(command,"bye")){
		scanf("%s",command);
		
		if(!strcmp(command,"enter")) {
			scanf("%s",val);
			scanf("%d",&prio);
			if((enqueue(&q,val,prio)==NULL)) 
				printf("No more pushing please \n");
			else 
				printf("Name entered %s priority %d \n",val,prio);
		
		   // print_queue(&q);
		}
		if(!strcmp(command,"delete")) {
			if(!isEmpty(&q))
				printf("Name deleted %s \n",dequeue(&q,val)); 
			else 
				printf("Queue is empty\n");
		}
	} /* while */

	printf("End session \n");
	return 0;
}

