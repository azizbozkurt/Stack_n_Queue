
/*************TestDriver.c****************************/


//#include "Stack.c"
#include "Stack_LL.c"


void test_push () {

        // Arrange
	Reset();
        int number = 75;

        //Act
        int vaerde = push(number);

        //Assert
        if (vaerde == number) {
        	printf("Push Test ..Succesful\n");
        } else {
        	printf("Push Test **Failed**\n");
	}
}


/*
//Only for stacks implemented with arrays
void stack_overflow() {
	
	//Arrange
	Reset();
	Init();


	//Act
	for (int i=1; i<10; i+=1) {
	push(i);
	}
	
	//Assert
	if (stack[top] == 99) {
		printf("Overflow Test ..Successful\n");
	} else { 
		printf("Overflow Test **Failed**\n");
	}
}
*/


void test_pop() {

	//Arrange
	Reset();
	Init();

	//Act
	int popvalue = pop();

	//Assert
	if (popvalue == 99) {
		popvalue = pop();
		if (popvalue == 88) {
			printf("Pop Test ..Succesful\n");
		} else { 
			printf("Pop Test **Failed**\n");
		}
	}
}


void peek_test() {

	//Arrange
	Reset();
	Init();
	
	//Act
	int peekvalue = peek();

	//Assert
	if (peekvalue == 99) {
		printf("Peek Test ..Successful\n");
	} else {
		printf("Peek Test **Failed**\n");
	}
}


void stack_underflow() {

	//Arrange
	Reset();
	Init();
	int popvalue;	

	//Act
	for (int j=0; j<15; j++) {
		popvalue = pop();
	}
	
	//Assert
	if (popvalue == 0) {
		printf("Stack Underflow ..Succesful\n");
	} else {
		printf("Stack Underflow **Failed**\n");
	}
}



void main() {

printf("Test of Stack implementation begins:\n");

test_push();
//stack_overflow();
test_pop();
stack_underflow();
peek_test();

}






