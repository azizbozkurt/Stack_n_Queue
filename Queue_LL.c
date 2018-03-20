#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

typedef struct node ND;

ND *tail = NULL;
ND *head = NULL;

bool isEmpty() {
	return tail == NULL;
}


void push(int input) {
	
	//ND *newNode;
	ND *newNode = (ND*)malloc(sizeof(ND));
	newNode->value = input;

	if(isEmpty()) {
	newNode->next = NULL;
	tail = newNode;
	head = newNode;
	printf("Pushed - First Node is %d\n", input);
	} 
	else {
	newNode->next = tail;
	tail = newNode;
	printf("Pushed %d\n", input);
	}

}










int main() {

push(77);
push(88);
push(99);

return 0;

}

