#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define FLUSHvalue -1762630107

struct node
{
    int value;
    struct node *next;
};

typedef struct node NOD;

NOD *top = NULL;

bool isEmpty()
{
    return top == NULL;
}

bool array = false;

int push(int input) {

    NOD *newNode = (NOD*) malloc(sizeof(NOD));
    newNode->value = input;

    if (isEmpty())
    {
        newNode->next = NULL;
        top = newNode;
        return top->value;
    }
    else
    {
        newNode->next = top;
        top = newNode;
        return top->value;
    }
}

int peek() {

    if (isEmpty())
    {
        return FLUSHvalue;
    }
    else
    {
        int peekval = top->value;
        return peekval;
    }
}

int pop() {

    if (isEmpty())
    {
        return FLUSHvalue;
    }
    else
    {
        NOD *poptemp = top;
        top = poptemp->next;
        return poptemp->value;
        free(poptemp);
    }
}


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

        int userChoice , value, popvalue, peekvalue, probe;
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case (1):
            printf("Please enter the value to be pushed:\n");
            scanf(" %d", &value);
            push(value);
            printf("Push succesful. Pushed %d\n", value);
            break;

        case (2):
            popvalue = pop();
            if (popvalue == FLUSHvalue)
                printf("Popped failed. Stack is Empty!\n");
            else
                printf("Popping succesful. Popped %d\n", popvalue);
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
            if (probe == FLUSHvalue)
            {
                printf("No elements to show. Stack is Empty!\n");
            }
            else
            {
                printf("Elements in Stack are: \n");
                int list;
                while (!isEmpty())
                {
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


/*************************Testing Interface*********************************************/
//Empty stack
void Reset() {

    while (top != NULL)
    {
        NOD *temp = top;
        top = temp->next;
        free(temp);
    }
}

//Fill stack with 10 elements
void Init() {

    for (int i = 0; i < 10; i++)
    {
        struct node *newNode = (struct node*) malloc(sizeof(struct node));
        newNode->value = i * 11 + 11;

        if (isEmpty())
        {
            newNode->next = NULL;
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }
}
/**************************************************************************************/


#if TEST == 0

void main()
{

    Menu();

}

#endif
