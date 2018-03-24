
/*************TestDriver.c****************************/


#include "Stack.c"
//#include "Stack_LL.c"


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



//Will only run for stacks implemented with arrays
void stack_overflow() {

while (array) {
	//Arrange
	Reset();
	Init();
	int OFvalue;

	//Act
	for (int i=0; i<10; i++) {
	OFvalue = push(i);
	}
		
	//Assert
	if (OFvalue == 99) {
		printf("Overflow Test ..Successful\n");
	} else { 
		printf("Overflow Test **Failed**\n");
	}
break;
}
}

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
	int UFvalue;	

	//Act
	for (int j=0; j<15; j++) {
		UFvalue = pop();
	}
	
	//Assert
	if (UFvalue == 0) {
		printf("Underflow Test ..Succesful\n");
	} else {
		printf("Underflow Test **Failed**\n");
	}
}


void showAll_test() {
	//Arrange
	Reset();
	Init();

	//Act
	int showvalue = showAll();

	//Assert
	if (showvalue == 0) {
		printf("ShowAll Test ..Succesful\n");
	} else {
		printf("ShowAll Test **Failed**\n");	}
}



void main() {

printf("Test of Stack implementation begins:\n");

test_push();
stack_overflow();
test_pop();
stack_underflow();
peek_test();
showAll_test();


}


