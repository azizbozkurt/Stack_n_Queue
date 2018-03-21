
/*************TestDriver.c****************************/


//#include "Stack.c"
#include "Stack_LL.c"


void test_push () {

        // Arrange
	top = -1;
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

/****************************************************************************************

//Only for stacks implemented with arrays

void stack_overflow() {
	
	//Arrange
	for (int i=0; i<10; i++) {
	stack[i] = i*11;
	}

	for (int i=1; i<10; i+=1) {
	}
	
	//Act
	push(i);
	
	//Assert
	if (stack[top] == 9) {
		printf("Overflow Test ..Successful\n");
	} else { 
		printf("Overflow Test **Failed**\n");
	}
}

//****************************************************************************************

void test_pop() {

	//Arrange
	for (int i=0; i<10; i++) {
	stack[i] = i*11;
	}

	//Act
	pop();

	//Assert
	if (popval == 9) {
		pop();
		if (popval == 8) {
			printf("Pop Test ..Succesful\n");
		} else { 
			printf("Pop Test **Failed**\n");
		}
	}
}


/*********************************************************************
void peek_test() {

	for (int i=0; i<10; i++) {
	stack[i] = i*11;
	}
	
	top = LENGTH-1;

	peek();
	if (peekval == 99) {
		printf("Peek Test ..Successful\n");
	} else {
		printf("Peek Test **Failed**\n");
	}
}


void stack_underflow() {

	for (int i=0; i<10; i++) {
	stack[i] = i*11+11;
	}
	
	for (int j=0; j<15; j++) {
		pop();
	}

	if (popval == 11) {
		printf("Stack Underflow ..Succesful\n");
	} else {
		printf("Stack Underflow **Failed**\n");
	}
}

**********************************************************************************/


int main() {

printf("Test of Stack implementation begins:\n");

test_push();
//stack_overflow();
//test_pop();
//stack_underflow();
//peek_test();


}






