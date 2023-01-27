// C program
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NODE_SIZE 10
#define MAX_LINE_SIZE 1000
#define MAX_STACK_SIZE 100
#define MAX_QUEUE_SIZE 100

// A structure to represent a stack
struct Stack {
    int top;
    unsigned capacity;
    char** array;
};

// A structure to represent a queue
struct Queue {
    int front, rear, size;
    unsigned capacity;
    char** array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;

    stack->array = (char **)malloc(stack->capacity * sizeof(char *));
    int i;
    for (i=0; i<capacity; i++)
         stack->array[i] = (char *)malloc(MAX_NODE_SIZE * sizeof(char));

    return stack;
}

// Stack is full when top is equal to the last index
int isFullStack(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmptyStack(struct Stack* stack)
{
    return stack->top == -1;
}

// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, char* item)
{
    if (isFullStack(stack))
        return;
    strcpy(stack->array[++stack->top], item);
    printf("%s pushed to stack\n", item);
}

// Function to remove an item from stack.  It decreases top by 1
char* pop(struct Stack* stack)
{
    if (isEmptyStack(stack))
        return "";
    return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
char* peek(struct Stack* stack)
{
    if (isEmptyStack(stack))
        return "";
    return stack->array[stack->top];
}

/////////////////////
//QUEUE
/////////////////////

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue* createQueue(unsigned capacity)
{
    struct Queue* queue = (struct Queue*)malloc(
        sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    // This is important, see the enqueue
    queue->rear = capacity - 1;
    queue->array = (char **)malloc(queue->capacity * sizeof(char *));
    int i;
    for (i=0; i<capacity; i++)
         queue->array[i] = (char *)malloc(MAX_NODE_SIZE * sizeof(char));

    return queue;
}

// Queue is full when size becomes
// equal to the capacity
int isFullQueue(struct Queue* queue)
{
    return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
int isEmptyQueue(struct Queue* queue)
{
    return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(struct Queue* queue, char* item)
{
    if (isFullQueue(queue))
        return;
    queue->rear = (queue->rear + 1)
                  % queue->capacity;
    strcpy(queue->array[queue->rear], item);
    queue->size = queue->size + 1;
    printf("%s enqueued to queue\n", item);
}

// Function to remove an item from queue.
// It changes front and size
char* dequeue(struct Queue* queue)
{
    char *item = malloc(sizeof(char) * MAX_NODE_SIZE);
    if (isEmptyQueue(queue))
        return "";
    strcpy(item, queue->array[queue->front]);
    queue->front = (queue->front + 1)
                   % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// Function to get front of queue
char* front(struct Queue* queue)
{
    if (isEmptyQueue(queue))
        return "";
    return queue->array[queue->front];
}

// Function to get rear of queue
char* rear(struct Queue* queue)
{
    if (isEmptyQueue(queue))
        return "";
    return queue->array[queue->rear];
}

void displayQueue(struct Queue* queue){
    if (isEmptyQueue(queue))
        return;
    while(!isEmptyQueue(queue)){
        printf("%s ", dequeue(queue));
    }
}

/* define function that is used to assign precedence to operator.
* Here ^ denotes exponent operator.
* In this function we assume that higher integer value
* means higher precedence */

int precedence(char symbol)
{
	if(symbol == '^') /* exponent operator, highest precedence*/
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-') /* lowest precedence */
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
	{
		return 1;
	}
	else
	{
	    return 0;
	}
}

int is_digit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int is_number(char *param)
{
    //printf("number is %s\n", param);
    int i =0;
    while (param[i])
    {
        if (!is_digit(param[i++]))
            return 0;
    }
    return 1;
}

int int_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}

// The main function that returns value of a given expression
char* evaluateExpression(struct Queue* queue)
{
    // Create a stack of capacity equal to expression size
    struct Stack* stack = createStack(queue->size);
    
    // Scan all characters one by one
    while(!isEmptyQueue(queue)){

        char* item = dequeue(queue);
        char itemToBeInserted[MAX_NODE_SIZE];
        // If the scanned character is an operand (number here),
        // push it to the stack.
        if (is_number(item))
            push(stack, item);

        // If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = atoi(pop(stack));
            int val2 = atoi(pop(stack));
            switch (item[0]) //here, we convert char* to char
            {
                case '^':
                    sprintf(itemToBeInserted, "%d", int_pow(val2, val1));
                    push(stack, itemToBeInserted); break;
                case '*':
                    sprintf(itemToBeInserted, "%d", val2 * val1);
                    push(stack, itemToBeInserted); break;
                case '/':
                    sprintf(itemToBeInserted, "%d", val2/val1);
                    push(stack, itemToBeInserted); break;
                case '+':
                    sprintf(itemToBeInserted, "%d", val2 + val1);
                    push(stack, itemToBeInserted); break;
                case '-':
                    sprintf(itemToBeInserted, "%d", val2 - val1);
                    push(stack, itemToBeInserted); break;
            }
        }
    }
    return pop(stack);
}

// Driver program
int main()
{

    struct Stack* stack = createStack(MAX_STACK_SIZE);
    struct Queue* queue = createQueue(MAX_QUEUE_SIZE);

    char buf[MAX_LINE_SIZE];
    fgets(buf, MAX_LINE_SIZE, stdin);

    //remove new line from fgets
    buf[strlen(buf)-1]='\0';

    char* item = strtok(buf," ");

    while (item != NULL){

        if(strlen(item)==1){
            char item_char = item[0];
            if(is_digit(item_char)){ //an operand (a number) with one digit
                enqueue(queue, item);
            }
            else if(is_operator(item_char)){ //if you find an operator
                char item_top_char = peek(stack)[0];
                while(is_operator(item_top_char) && precedence(item_top_char)>= precedence(item_char)){ //pop off the stack all operators (not parents) that
                    enqueue(queue, pop(stack)); //have equal or higher precedence and add them to the postfix queue
                    item_top_char = peek(stack)[0];
                }
                //Then push the operator found in the input infix expression onto the stack.
                push(stack, item);
            }
            else if(item_char=='('){ //if you find a left parenthesis,
                push(stack, item); //push it onto the stack
            }
            else if(item_char==')'){ //if you find a right parenthesis,
                while(strcmp(peek(stack), "(")){ //until you find the matching left parenthesis
                    enqueue(queue, pop(stack)); //pop operators from the stack and add them to the queue
                }
                //which you can ignore (left_paranthesis)
                if (!strcmp(peek(stack), "("))
                    pop(stack); //then ignore it
            }
        }
        else if (is_number(item)){//it is an operand with multiple digits
             enqueue(queue, item);
        }
        else{
            printf("Entered %s Input error!\n", item);
        }
        item = strtok (NULL, " ");
    }
    //When you find the end of the infix expression
    while(!isEmptyStack(stack)){
        //copy all remaining operators in the stack to the queue
        enqueue(queue, pop(stack));
    }
        int temp = queue->size;
        
    displayQueue(queue);
    printf("\n\n\n");
    //refill the queue (we just edit the indices, 
    //we do not delete actually)
    queue->front=0; 
    queue->size = temp;
    
    printf("Result is: %s", evaluateExpression(queue));
}
