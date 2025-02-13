// Linked List in C

#include <stdio.h>
#include <stdlib.h>

// Defining a structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning
void insertAtBeginning(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));  // Allocate memory
    newNode->data = value;
    newNode->next = *head;  // Point new node to old head
    *head = newNode;  // Update head to new node
}

// Function to display the linked list
void displayList(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;  // Initialize empty list

    // Inserting nodes
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    // Displaying list
    displayList(head);

    return 0;  // Successful execution
}
