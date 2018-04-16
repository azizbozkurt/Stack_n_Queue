/****************************************************************/
/************************TestDriver.c****************************/
/****************************************************************/

//For testing the array implementation of stack
//e.g. "gcc Testdriver.c -DARRAY -DTEST" to test the array impl.
#if ARRAY
#include "Stack.c"
#endif

//For testing the linked list implementation of stack 
#if LL
#include "Stack_LL.c"
#endif

void test_push()
{

    // Arrange
    Reset();
    int number = 75;

    //Act
    push(number);
    int vaerde = peek();

    //Assert
    if (vaerde == number)
    {
        printf("Push Test ..Succesful\n");
    }
    else
    {
        printf("Push Test **Failed**\n");
    }
}

//Will only run for stacks implemented with arrays
void stack_overflow()
{

    while (array)
    {
        //Arrange
        Reset();
        Init();
        int OFvalue;

        //Act
        for (int i = 0; i < 10; i++)
        {
            OFvalue = push(i);
        }

        //Assert
        if (OFvalue == FLUSHvalue)
        {
            printf("Overflow Test ..Successful\n");
        }
        else
        {
            printf("Overflow Test **Failed**\n");
        }
        break;
    }
}

void test_pop()
{

    //Arrange
    Reset();
    Init();

    //Act
    int popvalue = pop();

    //Assert
    if (popvalue == 110)
    {
        popvalue = pop();
        if (popvalue == 99)
        {
            printf("Pop Test ..Succesful\n");
        }
        else
        {
            printf("Pop Test **Failed**\n");
        }
    }
    else
    {
        printf("Pop Test ****Failed****\n");
    }
}

void peek_test()
{

    //Arrange
    Reset();
    Init();

    //Act
    int peekvalue = peek();

    //Assert
    if (peekvalue == 110)
    {
        printf("Peek Test ..Successful\n");
    }
    else
    {
        printf("Peek Test **Failed**\n");
    }
}

void stack_underflow()
{

    //Arrange
    Reset();
    Init();
    int UFvalue;

    //Act
    for (int j = 0; j < 10; j++)
    {
        UFvalue = pop();
    }

    //Assert
    if (UFvalue == 11)
    {
        for (int j = 0; j < 10; j++)
        {
            UFvalue = pop();
        }
        if (UFvalue == FLUSHvalue)
        {
            printf("Underflow Test ..Succesful\n");
        }
        else
        {
            printf("Underflow Test **Failed**\n");
        }
    }
    else
    {
        printf("Underflow Test ***Failed***\n");
    }
}


void main()
{
    printf("************ TEST Of STACK Implementation BEGINS ***********\n");

    test_push();
    stack_overflow();
    test_pop();
    stack_underflow();
    peek_test();

}

