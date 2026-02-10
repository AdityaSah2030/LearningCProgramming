// Priority Queue (Array Implementation)

#include <stdio.h>
#define MAX 5   // Maximum size of priority queue

int pq[MAX];
int front = -1, rear = -1;

// Function to insert element based on priority (higher value = higher priority)
void insert(int value) {
    if (rear == MAX - 1) {
        printf("Priority Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    if (front == -1) {  // First element
        front = rear = 0;
        pq[rear] = value;
    } 
    else {
        int i;
        // Shift elements to maintain priority (descending order)
        for (i = rear; i >= front && pq[i] < value; i--) {
            pq[i + 1] = pq[i];
        }
        pq[i + 1] = value;
        rear++;
    }

    printf("%d inserted into priority queue.\n", value);
}

// Function to delete highest priority element
void delete() {
    if (front == -1) {
        printf("Priority Queue Underflow! Queue is empty.\n");
        return;
    }

    printf("%d deleted from priority queue.\n", pq[front]);

    if (front == rear) {   // Only one element
        front = rear = -1;
    } 
    else {
        front++;
    }
}

// Function to display queue
void display() {
    if (front == -1) {
        printf("Priority Queue is empty.\n");
        return;
    }

    printf("Priority Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", pq[i]);
    }
    printf("\n");
}

int main() {
    insert(30);
    insert(10);
    insert(50);
    insert(20);
    display();

    delete();
    display();

    delete();
    delete();
    delete();
    delete();   // Trying to delete from empty queue

    return 0;
}
