// Inorder Traversal in Binary Tree using Stack

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Structure for tree node
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// Function to create new node
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Inorder traversal without recursion
void inorder(Node *root) {

    Node *stack[MAX];
    int top = -1;

    Node *current = root;

    while (current != NULL || top != -1) {

        // Reach the leftmost node
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;
        }

        // Pop node from stack
        current = stack[top--];

        // Visit node
        printf("%d ", current->data);

        // Move to right subtree
        current = current->right;
    }
}

int main() {

    // Creating a sample tree
    Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    printf("Inorder Traversal: ");
    inorder(root);

    printf("\n");

    return 0;
}