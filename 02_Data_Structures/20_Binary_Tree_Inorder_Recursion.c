// Inorder Traversal in Binary Tree

#include <stdio.h>
#include <stdlib.h>

// Structure for tree node
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Inorder Traversal function
// Left -> Root -> Right
void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);       // Visit left subtree
        printf("%d ", root->data); // Visit root
        inorder(root->right);      // Visit right subtree
    }
}

int main() {

    // Creating a sample binary tree
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