// Queue

#include <stdio.h>
#define MAX 5  // Maximum size of queue

int queue[MAX], front = -1, rear = -1;  // Queue array and front/rear indices

// Function to enqueue an element into the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) front = 0;  // Initialize front if first element
    queue[++rear] = value;  // Increment rear and insert value
    printf("%d enqueued into queue.\n", value);
}

// Function to dequeue an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }
    printf("%d dequeued from queue.\n", queue[front++]);  // Remove front element
}

// Function to peek (view the front element)
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element is %d\n", queue[front]);
}

// Function to check if queue is empty
int isEmpty() {
    return (front == -1 || front > rear);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    peek();   // View the front element
    dequeue(); // Remove front element
    dequeue();    
    dequeue();
    dequeue(); // Trying to dequeue from an empty queue

    return 0;
}
