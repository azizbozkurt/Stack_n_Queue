#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};


struct node *top = NULL;


bool isEmpty() {
	return top == NULL;
}


void push (int input) {

	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode->value = input;

	if (isEmpty()) {
	newNode->next = NULL;
	top = newNode;
	printf("Pushing - First Node is %d\n", input);
	} else {
	newNode->next = top;
	top = newNode;
	printf("Pushed %d\n", input);
	}

}


int peek() {
	int peekval;

	if(isEmpty()) {
	printf("Stack is empty!");
	} else {
	peekval = top->value;
	printf("Top element is %d\n", top->value);
	return peekval;
	}
}


int main() {

push(77);
push(99);
push(11);
push(22);

//printf("%x\n", top);

//printf("%d\n", *top);

//printf("%x \n", &top);

//printf("Top element is %d\n", top->value);

peek();

return 0;

}



