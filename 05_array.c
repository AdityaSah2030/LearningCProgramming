// Arrays in C

#include <stdio.h>  // Standard I/O library

int main() {
    // 1D Array Example - Reverse an array
    int arr[5], i;
    
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // Taking input for the array
    }

    printf("\nArray in reverse order: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);  // Printing the array in reverse order
    }
    printf("\n");

    return 0;  // Successful execution
}
