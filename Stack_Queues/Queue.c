#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 10

int queue[MAXSIZE];
int head = 0;
int tail = -1;
int count = 0;
int sel;

bool isEmpty(){
	return count == 0;
}

bool isFull(){
	return count >= MAXSIZE;
}


int queue_size(){
	return count;
}

int select(){
	return queue[sel];
}


void insert(int value){

	if(!isFull()){
		queue[++tail] = value;
		count++;
	} else {
		printf("Insert error - Queue is full.\n");
	}
}

int delete(){
	int value = queue[head++];

	if(head == MAXSIZE){
		head = 0;
	}
	count--;
	return value;
}

int main(){

//Add elements
	insert(77);
	insert(11);
	insert(12);
	insert(13);
	insert(14);
	insert(15);
	insert(16);
	insert(17);
	insert(18);
	insert(19);
	insert(95);
	insert(99);


//Show a single element
	select(2);
	printf("The selected element is: %d\n" ,select(sel));

	printf("Amount of elements in queue: %d\n", queue_size());

//Delete elements, by FIFO
	delete();
	//delete();
	//delete();
	printf("Amount of elements in queue: %d\n", queue_size());

//Show all elements in the queue
	printf("Elements in the queue are: \n");
	while(!isEmpty()) {
		int list = delete();
		printf("%d\n", list);
		}

}
