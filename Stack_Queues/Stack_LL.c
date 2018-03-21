#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Stack_LL.c


struct node
{
	int value;
	struct node *next;
};

typedef struct node NOD;

NOD *top = NULL;

bool isEmpty() {
	return top == NULL;
}


int push (int input) {

	//struct node *newNode;
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
	newNode->value = input;

	if (isEmpty()) {
	newNode->next = NULL;
	top = newNode;
	printf("Pushing - First Node is %d\n", input);
	return top->value;
	} else {
	newNode->next = top;
	top = newNode;
	printf("Pushed %d\n", input);
	return top->value;
	}
	return 0;
}



int peek() {

	int peekval;

	if(isEmpty()) {
	printf("Stack is empty!\n");
	} else {
	peekval = top->value;
	printf("Top element is %d\n", top->value);
	return peekval;
	}
}


int pop() {

	if(isEmpty()) {
	printf("Stack is empty!!\n");
	} else {
	//NOD *temp;
	printf("Deleted element %d\n", top->value);
	top = top->next;
	}
}


int showAll() {
		
	printf("\nElements in the stack are:\n");

	while(!isEmpty()) {
	printf("%d\n", top->value);
	top = top->next;
	}
}


/*************************Testing Interface*****************************/
//void init_poptest() {









/*********************************Commented for Testing


int main() {

push(77);
push(99);
push(11);
push(22);
push(33);
push(44);
push(55);
push(66);
push(77);
push(98);
push(99);



//printf("%d\n", *top);

//printf("%x \n", &top);

//printf("Top element is %d\n", top->value);
pop();
pop();

peek();

showAll();

peek();
return 0;

}

*********************************/

