#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 10

int queue[MAXSIZE];
int head = 0;
int tail = -1;
int count = 0;

bool isEmpty()
{
    return count == 0;
}

bool isFull()
{
    return count >= MAXSIZE;
}

int queue_size()
{
    return count;
}

int select(int sel)
{
    return queue[sel];
}

void Enqueue(int value)
{

    if (!isFull())
    {
        tail++;
        queue[tail] = value;
        count++;
        printf("Enqueued %d\n", queue[tail]);
    }
    else
    {
        printf("Enqueue error - Queue is full.\n");
    }
}

int Dequeue()
{
    int value = queue[head];
    head++;

    if (head == MAXSIZE)
    {
        head = 0;
    }
    count--;
    //printf("Dequeued %d\n", value);
    return value;
}

int main()
{

//Add elements
    Enqueue(11);
    Enqueue(22);
    Enqueue(33);
    Enqueue(44);
    Enqueue(55);
    Enqueue(66);
    Enqueue(77);
    Enqueue(88);
    Enqueue(99);
    Enqueue(120);
    Enqueue(45);

//Show a single element
    int selvalue = select(2);
    printf("The selected element is: %d\n", selvalue);

//Display the amount of elements in the queue
    printf("\nAmount of elements in queue: %d\n", queue_size());

//Delete elements, by FIFO
    Dequeue();
    Dequeue();
    Dequeue();

//Display the amount of elements in the queue
    printf("\nAmount of elements in queue: %d\n", queue_size());

//Show all elements in the queue
    printf("\nElements in the queue are: \n");
    while (!isEmpty())
    {
        int list = Dequeue();
        printf("%d\n", list);
    }

}

