#include <stdio.h>

#define LENGTH 5

// Global Variables
int queue[LENGTH];
int rear = -1;
int front = -1;

// Prototypes
void isEmpty();
void isFull();
void enqueue(int data);
void dequeue();
void display();

int main()
{
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    display();
    dequeue();
    dequeue();
    display();
    
    return 0;
}

// check if the queue is empty
void isEmpty()
{
    if(rear == -1 && front == -1)
    {
        printf("Queue is empty");
    }else{
        isFull();
    }
}

// check if the queue is full
void isFull()
{
    if(rear == LENGTH){
        printf("Queue is full");
    }
}

// insert element into the Queue
void enqueue(int data){
     if(rear == LENGTH - 1){
         isFull();
     }else if(front == -1 && rear == -1){
         front = rear = 0;
         queue[front] = data;
     }else{
         rear++;
         queue[rear] = data;
     }
 }
 
 // remove element in the queue
 void dequeue(){
     if(front == -1 && rear == -1){
         printf("UnderFlow");
     }else if(front == rear){
         front = rear = -1;
     }else{
         front++;
         printf("Element removed from the queue: %d\n",queue[front]);
     }
 }
 
// Display all elements in the Queue
void display(){
    int i;
    if(front == -1 && rear == -1){
        isEmpty();
    }else{
        for(i = front; i < rear + 1; i++){
            printf("%d - ",queue[i]);
        }
        printf(" \n");
    }
}
