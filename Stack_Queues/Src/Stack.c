#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define LENGTH 10
#define FLUSHvalue -1762630107

int stack[LENGTH];
int top = -1;

bool array = true;

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top >= LENGTH - 1;
}

int peek()  {

    if (isEmpty())
    {
        return FLUSHvalue;
    }
    else
    {
        return stack[top];
    }
}


int push(int value) {

    if (!isFull())
    {
        top++;
        stack[top] = value;
    }
    else
    {
        return FLUSHvalue;
    }
}


int pop() {

    if (!isEmpty())
    {
        int popval = stack[top];
        --top;
        return popval;
    }
    else
    {
        return FLUSHvalue;
    }
}


/*************************************Testing Interface*****************************/
//Empty stack
void Reset()
{
    top = -1;
}

//Fill stack
void Init() {

    for (int i = 0; i < 10; i++)
    {
        top++;
        stack[top] = i * 11 + 11;
    }
}

/**********************************************************************************/

void Menu() {

    printf("+***********************************************************************+ \n");
    printf("|               Stack implemented with Linked List                      | \n");
    printf("|                               MENU                                    | \n");
    printf("+***********************************************************************+ \n");

    while (1)
    {
        printf("\nPress 1 to Push\n");
        printf("Press 2 to Pop\n");
        printf("Press 3 to Peek\n");
        printf("Press 4 to Show All\n");
        printf("Press 0 to Exit\n\n");

        int userChoice, value, popvalue, peekvalue, pushvalue, probe;
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case (1):
            printf("Please enter the value to be pushed:\n");
            scanf(" %d", &value);
            pushvalue = push(value);
            if (pushvalue == FLUSHvalue)
                printf("Push failed. Stack is Full!\n");
            else
                printf("Push succesful. Pushed %d\n", value);
            break;

        case (2):
            popvalue = pop();
            if (popvalue == FLUSHvalue)
                printf("Pop failed. Stack is Empty!\n");
            else
                printf("Pop succesful. Popped %d\n", popvalue);
            break;

        case (3):
            peekvalue = peek();
                if (peekvalue == FLUSHvalue)
                    printf("No element to peek. Stack is Empty!\n");
                else
                    printf("Peek value is: %d\n", peekvalue);
                break;

        case (4):
            probe = peek();
                if (probe == FLUSHvalue) {
                    printf("No elements to show. Stack is Empty!\n");
                }
                else
                {
                    printf("Elements in Stack are: \n");
                    int list;
                    while (!isEmpty()) {
                        list = pop();
                        printf("%d\n", list);
                    }
                    printf("\n");
                }
                break;

        case (0):
            exit(0);

        default:
            printf("Invalid choice! Please try again with a valid choice. Its not that hard :D \n");
            break;
        }
    }
}

#if TEST == 0

void main()
{

    Menu();

}

#endif
