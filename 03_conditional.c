// Conditional Statements in C

#include <stdio.h>  // Standard I/O library

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using if-else to check if the number is positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Using switch-case to check if the number is even or odd
    switch (num % 2) {
        case 0:
            printf("The number is even.\n");
            break;
        case 1: 
        case -1:  // To handle negative odd numbers
            printf("The number is odd.\n");
            break;
        default:
            printf("Unexpected error!\n");
    }

    return 0;  // Successful execution
}
