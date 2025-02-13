//Operators & Expressions in C

#include <stdio.h>  // Standard I/O library

int main() {
    // Declaring variables
    int num1, num2;
    float result;
    
    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Performing Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    
    // Handling division separately to avoid division by zero
    if (num2 != 0) {
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division and modulus by zero are not allowed!\n");
    }

    // Performing Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("%d > %d : %d\n", num1, num2, num1 > num2);
    printf("%d < %d : %d\n", num1, num2, num1 < num2);
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);

    // Performing Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(%d > 0) && (%d > 0) : %d\n", num1, num2, (num1 > 0) && (num2 > 0));
    printf("(%d > 0) || (%d > 0) : %d\n", num1, num2, (num1 > 0) || (num2 > 0));
    printf("!(%d > %d) : %d\n", num1, num2, !(num1 > num2));

    return 0;  // Successful execution
}
