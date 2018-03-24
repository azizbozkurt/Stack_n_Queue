#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


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


bool array = false;


int push (int input) {

	NOD *newNode = (NOD*)malloc(sizeof(NOD));
	newNode->value = input;

	if (isEmpty()) {
	newNode->next = NULL;
	top = newNode;
	//Comment when under test
	printf("Pushing - First Node is %d\n", input);
	return top->value;
	} else {
	newNode->next = top;
	top = newNode;
	//Comment when under test
	printf("Pushed %d\n", input);
	return top->value;
	}
return 0;
}


int peek() {

	if(isEmpty()) {
	printf("Stack is empty!\n");
	} else {
	int peekval = top->value;
	//Comment when under test
	printf("Top element is %d\n", top->value);
	return peekval;
	}
return 0;
}


int pop() {

	if(isEmpty()) {
	//Comment when under test
	printf("Stack is empty!!\n");
	} 
	else {
	NOD *poptemp = top;
	top = poptemp->next;
	//Comment when under test
	printf("Deleted element %d\n", poptemp->value);
	return poptemp->value;
	free(poptemp);
	}
return 0;
}


int showAll() {
	//Comment when under test	
	printf("\nElements in the stack are:\n");
	int showval;

	while(!isEmpty()) {
		//Comment when under test
		printf("%d\n", top->value);
		showval = top->value;
		top = top->next;
		}
	return showval;
}



/*************************Testing Interface*********************************************/
//Empty stack
void Reset() {
	
	while(top != NULL)
	{
		NOD *temp = top;
		top = temp->next;
		free(temp);
	}
}


//Fill stack
void Init() {
	for(int i=0; i<10; i++) {
		struct node *newNode = (struct node*)malloc(sizeof(struct node));
		newNode->value = i*11;

		if (isEmpty()) {
		newNode->next = NULL;
		top = newNode;
		} else {
		newNode->next = top;
		top = newNode;
		}
	}
}

/**************************************************************************************/




/******Commented for Testing Purposes*****/

void main() {

push(77);
push(0);
push(11);
push(22);
push(33);
push(44);
push(55);
push(66);
push(77);
push(98);
push(99);

pop();

peek();

showAll();


}

/*************************************************************************************************/

