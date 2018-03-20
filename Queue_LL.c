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
	return head == NULL;
}


void Enqueue(int input) {
	
	//ND *newNode;
	ND *newNode = (ND*)malloc(sizeof(ND));
	newNode->value = input;

	if(isEmpty()) {
	newNode->next = NULL;
	tail = newNode;
	head = newNode;
	printf("Enqueued - First node is %d\n", input);
	} 
	else {
	tail->next = newNode;
	tail = newNode;
	printf("Enqueued %d\n", input);
	}

}


int Dequeue() {

	if(isEmpty()) {
	printf("Cant dequeue. Queue is empty!\n");
	} else if(head==tail){
	printf("Dequeued element %d\n", head->value);
	head = NULL;
	tail = NULL;
	} else {
	printf("Dequeued element %d\n", head->value);
	head = head->next;
	}
	
}
	

int showAll() {
	
	printf("\nElements in the Queue are:\n");
	while(!isEmpty()) {
	printf("%d\n", head->value);
	head = head->next;
	}
}



int main() {

Enqueue(77);
Enqueue(33);
Enqueue(22);
Enqueue(11);
Enqueue(99);
Enqueue(88);
Enqueue(66);
Enqueue(55);

Dequeue();
Dequeue();

showAll();

//printf("%p\n", tail);
//printf("%p\n", head);

return 0;

}



