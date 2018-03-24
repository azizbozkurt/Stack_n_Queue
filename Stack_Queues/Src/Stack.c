#include <stdio.h>
#include <stdbool.h>

#define LENGTH 10


int stack[LENGTH];
int top = -1;

bool array = true;


bool isempty() {
	return top == -1;
}


bool isfull() {
	return top >= LENGTH - 1;
}


int peek() {
	int peekval = stack[top];
	return peekval;
}


int push(int value) {

	if(!isfull()) {
		top++;
 		stack[top] = value;
		//Comment when under test
		printf("Pushing successful. Pushed %d\n" , stack[top]);
	} else {
		//Comment when under test
		printf("Couldn't push some value. Stack is full. \n");
	}
	return stack[top];
}


int pop() {
	//int value;

	if(!isempty()){
		int popval = stack[top];
		--top;
		//Comment when under test
		//printf("Popping successful. Popped %d\n" , popval);
		return popval;
	} else {
		//Comment when under test
		printf("Couldn't pop any value. Stack is empty. \n");
	}
	return 0;
}


int showAll() {
	int showval;
	//Comment when under test
	printf("\nElements in stack are: \n");
	while(!isempty()){
		showval = pop();
		//Comment when under test
		printf("%d\n", showval);
	}
	return showval;
}


/*************************************Testing Interface*****************************/
//Empty stack
void Reset()  {
	top = -1;
}


//Fill stack
void Init() {
	for (int i=0; i<10; i++) {
	top++;
	stack[top] = i*11;
	}
}

/**********************************************************************************/


void main() {

//Add elements
	push(7);
	push(11);
	push(22);
	push(33);
	push(44);
	push(55);
	push(66);
	push(77);
	push(88);
	push(99);
	push(990);
	push(995);

//Show the peek element
	peek();
	printf("The peek element is: %d\n" , peek());


//Delete elements, by LIFO
	//pop();
	//pop();
	
	
//Show all elements in stack
	showAll();
	
}



