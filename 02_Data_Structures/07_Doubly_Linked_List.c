// Doubly Linked List with All Operations

#include <stdio.h>
#include <stdlib.h>

// Structure for node
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Insert at beginning
void insertAtBeginning(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
    printf("%d inserted at beginning.\n", value);
}

// Insert at end
void insertAtEnd(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        printf("%d inserted at end.\n", value);
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    printf("%d inserted at end.\n", value);
}

// Insert at position
void insertAtPosition(struct Node **head, int value, int pos) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;

    if (pos == 1) {
        newNode->prev = NULL;
        newNode->next = *head;

        if (*head != NULL)
            (*head)->prev = newNode;

        *head = newNode;
        printf("%d inserted at position %d.\n", value, pos);
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;

    printf("%d inserted at position %d.\n", value, pos);
}

// Delete from beginning
void deleteFromBeginning(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;
    printf("%d deleted from beginning.\n", temp->data);

    *head = temp->next;

    if (*head != NULL)
        (*head)->prev = NULL;

    free(temp);
}

// Delete from end
void deleteFromEnd(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;

    if (temp->next == NULL) {
        printf("%d deleted from end.\n", temp->data);
        *head = NULL;
        free(temp);
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    printf("%d deleted from end.\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}

// Delete from position
void deleteFromPosition(struct Node **head, int pos) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;

    if (pos == 1) {
        printf("%d deleted from position %d.\n", temp->data, pos);
        *head = temp->next;

        if (*head != NULL)
            (*head)->prev = NULL;

        free(temp);
        return;
    }

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position!\n");
        return;
    }

    printf("%d deleted from position %d.\n", temp->data, pos);

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
}

// Display list forward
void displayForward(struct Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Forward List: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Display list backward
void displayBackward(struct Node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (head->next != NULL)
        head = head->next;

    printf("Backward List: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 60);
    insertAtPosition(&head, 30, 3);

    displayForward(head);
    displayBackward(head);

    deleteFromBeginning(&head);
    deleteFromEnd(&head);
    deleteFromPosition(&head, 2);

    displayForward(head);

    return 0;
}
