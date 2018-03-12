#include <stdio.h>
#include <stdbool.h>

#define LENGTH 10

int stack[LENGTH];
int top = -1;

bool isempty(){
	return top == -1;
}

bool isfull(){
	return top == LENGTH;
}


int selec(sel){
	return stack[sel];
}


int pop(){
	int value;

	if(!isempty()){
		value = stack[top];
		--top;
		return value;
	} else {
		printf("Couldn't pop any value. Stack is empty. \n");
	}
}

int push(int value){

	if(!isfull())
	{
		top++;
		stack[top] = value;
	} else {
		printf("Couldn't push some value. Stack is full. \n");
	}
}


int main(){

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

//Show a single element
	selec(2);
	printf("The selected element is: %d\n" ,selec());


//Delete elements, by LIFO
	//pop();
	//pop();


//Show all elements in stack
printf("Elements in stack are: \n");
while(!isempty()) {
	int value = pop();
	printf("%d\n", value);
	}

}
