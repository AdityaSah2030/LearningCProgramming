// Inorder Traversal in Binary Tree using Stack

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Structure for tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Inorder traversal without recursion
void inorder(struct Node *root) {

    struct Node *stack[MAX];
    int top = -1;

    struct Node *current = root;

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
    struct Node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    printf("Inorder Traversal: ");
    inorder(root);

    printf("\n");

    return 0;
}