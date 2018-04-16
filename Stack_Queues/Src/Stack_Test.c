#include "Stack.c"

void test_push()
{

    // Arrange
    top = -1;
    int number = 75;

    //Act
    int vaerde = push(number);

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

void stack_overflow()
{

    for (int i = 0; i < 10; i++)
    {
        stack[i] = i * 11;
    }

    for (int i = 1; i < 10; i += 1)
    {
        push(i);
    }

    if (stack[top] == 9)
    {
        printf("Overflow Test ..Successful\n");
    }
    else
    {
        printf("Overflow Test **Failed**\n");
    }
}

void test_pop()
{

    for (int i = 0; i < 10; i++)
    {
        stack[i] = i;
    }

    int popvalue = pop();

    if (popvalue == 9)
    {
        popvalue = pop();
        if (popvalue == 8)
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
        printf("Pop Test **Failed**\n");
    }
}

void peek_test()
{

    for (int i = 0; i < 10; i++)
    {
        stack[i] = i * 11;
    }

    top = LENGTH - 1;

    int peekval = peek();
    if (peekval == 99)
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

    top = -1;

    for (int i = 0; i < 10; i++)
    {
        stack[i] = i * 11 + 11;
        top = i;
    }

    int popval;

    for (int j = 0; j < 10; j++)
    {
        popval = pop();
    }
    if (popval == 11)
    {
        for (int j = 0; j < 10; j++)
        {
            popval = pop();
        }
        if (popval == FLUSH)
        {
            printf("Stack Underflow ..Succesful\n");
        }
        else
        {
            printf("Stack Underflow **Failed**\n");
        }
    }
    else
    {
        printf("Stack Underflow ****Failed****\n");
    }
}

void showAll_test()
{

    top = -1;
    for (int i = 0; i < 10; i++)
    {
        stack[i] = i * 11 + 11;
        top = i;
    }

    int elements = showAll();

    if (elements == 11)
    {
        printf("ShowAll test ..Succesful\n");
    }
    else
    {
        printf("ShowAll test **Failed**\n");
    }
}

int main()
{

    printf("Test of Stack.c begins:\n");

    test_push();
    stack_overflow();
    test_pop();
    stack_underflow();
    peek_test();
    showAll_test();

}

