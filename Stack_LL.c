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
	printf("FirstNode Inserted\n");	

	} else {
	newNode->next = top;
	top = newNode;
	printf("Other nodes Inserted \n");
	}

	printf("Inserted %d\n", input);

}



void main() {

push(77);
push(99);
push(11);
push(22);

printf("%x\n", top);

printf("%x\n", *top);

printf("%x \n", &top);


}



