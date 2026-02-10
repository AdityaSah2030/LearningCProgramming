// Stack 

#include <stdio.h>
#define MAX 5  // Maximum size of stack

int stack[MAX], top = -1;  // Stack array and top index

// Function to push an element into the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot insert %d\n", value);
        return;
    }
    stack[++top] = value;  // Increment top and insert value
    printf("%d pushed into stack.\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    printf("%d popped from stack.\n", stack[top--]);  // Remove top element
}

// Function to peek (view the top element)
void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element is %d\n", stack[top]);
}

// Function to check if stack is empty
int isEmpty() {
    return (top == -1);
}

int main() {
    push(10);
    push(20);
    push(30);
    peek();   // View the top element
    pop();    // Remove top element
    pop();    
    pop();
    pop();    // Trying to pop from an empty stack

    return 0;
}
