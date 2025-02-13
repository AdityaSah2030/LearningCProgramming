// Loops in C

#include <stdio.h>  // Standard I/O library

int main() {
    int num, i = 1;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Using a for loop to print numbers from 1 to num
    printf("\n--- Using for loop ---\n");
    for (i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a while loop to print numbers from num to 1
    printf("\n--- Using while loop ---\n");
    i = num;  // Reset i
    while (i >= 1) {
        printf("%d ", i);
        i--;  // Decrement i
    }
    printf("\n");

    // Using a do-while loop to print the number at least once
    printf("\n--- Using do-while loop ---\n");
    i = num;  // Reset i
    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    printf("\n");

    return 0;  // Successful execution
}
