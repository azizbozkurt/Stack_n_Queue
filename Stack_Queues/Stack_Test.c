
#include <stdio.h>
#include <stdbool.h>

#include "Stack.c"


void test_push () {

        // Arrange
        int number = 75;

        //Act
        int value = push(number);

        //Assert
        if (value == number)
        	printf("Push Test ..Succesful\n");
        else
        	printf("Push Test **Failed**\n");
}


void stack_overflow() {
		for (int i=1; i<10; i+=1)   {
			push(i);
		}
		if (stack[top] == 9){
			printf("Overflow Test ..Successful\n");
		} else {
			printf("Overflow Test **Failed**\n");
		}
}

//stack[0] = 12;


int main() {

printf("Test of Stack.c begins:\n");
test_push();
stack_overflow();

	//pop();
	
	//select(2);


}




