// Circular Queue (Array Implementation)

#include <stdio.h>
#define MAX 5   // Maximum size of circular queue

int cq[MAX];
int front = -1, rear = -1;

// Function to insert element into circular queue
void insert(int value) {
    // Check overflow
    if ((rear + 1) % MAX == front) {
        printf("Circular Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    if (front == -1) {   // First element
        front = rear = 0;
    } 
    else {
        rear = (rear + 1) % MAX;
    }

    cq[rear] = value;
    printf("%d inserted into circular queue.\n", value);
}

// Function to delete element from circular queue
void delete() {
    if (front == -1) {
        printf("Circular Queue Underflow! Queue is empty.\n");
        return;
    }

    printf("%d deleted from circular queue.\n", cq[front]);

    if (front == rear) {  // Only one element
        front = rear = -1;
    } 
    else {
        front = (front + 1) % MAX;
    }
}

// Function to display circular queue
void display() {
    if (front == -1) {
        printf("Circular Queue is empty.\n");
        return;
    }

    printf("Circular Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);   // Queue full here

    display();

    delete();
    delete();

    insert(60);
    insert(70);   // Circular insertion

    display();

    return 0;
}
