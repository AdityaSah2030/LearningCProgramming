// Circular Singly Linked List

#include <stdio.h>
#include <stdlib.h>

// Structure for node using typedef
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Insert at beginning
void insertAtBeginning(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
    } 
    else {
        Node *temp = *head;
        while (temp->next != *head)
            temp = temp->next;

        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
    }

    printf("%d inserted at beginning.\n", value);
}

// Insert at end
void insertAtEnd(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
    } 
    else {
        Node *temp = *head;
        while (temp->next != *head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = *head;
    }

    printf("%d inserted at end.\n", value);
}

// Insert at position
void insertAtPosition(Node **head, int value, int pos) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (pos == 1) {
        insertAtBeginning(head, value);
        free(newNode);
        return;
    }

    Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp->next != *head; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;

    printf("%d inserted at position %d.\n", value, pos);
}

// Delete from beginning
void deleteFromBeginning(Node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = *head;

    if (temp->next == *head) {
        printf("%d deleted from beginning.\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    Node *last = *head;
    while (last->next != *head)
        last = last->next;

    printf("%d deleted from beginning.\n", temp->data);
    *head = temp->next;
    last->next = *head;
    free(temp);
}

// Delete from end
void deleteFromEnd(Node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = *head;

    if (temp->next == *head) {
        printf("%d deleted from end.\n", temp->data);
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next->next != *head)
        temp = temp->next;

    printf("%d deleted from end.\n", temp->next->data);
    free(temp->next);
    temp->next = *head;
}

// Delete from position
void deleteFromPosition(Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (pos == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp->next != *head; i++)
        temp = temp->next;

    Node *del = temp->next;

    if (del == *head) {
        printf("Invalid position!\n");
        return;
    }

    printf("%d deleted from position %d.\n", del->data, pos);
    temp->next = del->next;
    free(del);
}

// Display circular list
void displayList(Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node *temp = head;
    printf("Circular Linked List: ");

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

int main() {
    Node *head = NULL;

    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 50);
    insertAtEnd(&head, 70);
    insertAtPosition(&head, 40, 3);

    displayList(head);

    deleteFromBeginning(&head);
    deleteFromEnd(&head);
    deleteFromPosition(&head, 2);

    displayList(head);

    return 0;
}
