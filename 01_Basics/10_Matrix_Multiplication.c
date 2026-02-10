// Matrix Multiplication

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3] = {0}; // Initialize result matrix to 0
    int i, j, k;

    // 🔹 Step 1: Taking Input for Matrix A
    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 🔹 Step 2: Taking Input for Matrix B
    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 🔹 Step 3: Performing Matrix Multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 🔹 Step 4: Displaying the Product Matrix
    printf("Resultant Matrix (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
