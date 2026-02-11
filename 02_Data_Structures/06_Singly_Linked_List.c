// Singly Linked List

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
    newNode->next = *head;
    *head = newNode;

    printf("%d inserted at beginning.\n", value);
}

// Insert at end
void insertAtEnd(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        printf("%d inserted at end.\n", value);
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    printf("%d inserted at end.\n", value);
}

// Insert at position (middle)
void insertAtPosition(Node **head, int value, int pos) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (pos == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("%d inserted at position %d.\n", value, pos);
        return;
    }

    Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printf("%d inserted at position %d.\n", value, pos);
}

// Delete from beginning
void deleteFromBeginning(Node **head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    Node *temp = *head;
    printf("%d deleted from beginning.\n", temp->data);
    *head = temp->next;
    free(temp);
}

// Delete from end
void deleteFromEnd(Node **head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    Node *temp = *head;

    if (temp->next == NULL) {
        printf("%d deleted from end.\n", temp->data);
        *head = NULL;
        free(temp);
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    printf("%d deleted from end.\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// Delete from position
void deleteFromPosition(Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    Node *temp = *head;

    if (pos == 1) {
        printf("%d deleted from position %d.\n", temp->data, pos);
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Invalid position!\n");
        return;
    }

    Node *del = temp->next;
    printf("%d deleted from position %d.\n", del->data, pos);
    temp->next = del->next;
    free(del);
}

// Display list
void displayList(Node *head) {
    Node *temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
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
