#include <stdio.h>   // Standard I/O functions
#include <math.h>    // For math functions like sqrt(), pow()

// User-defined header file (created in same directory)
// #include "myheader.h"  // This will work only if "myheader.h" exists

int main() {
    int a = 10, b = 3;
    int result;
    float fresult;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d (integer division)\n", a / b);
    printf("a %% b = %d (remainder)\n", a % b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("(a > b) && (b > 0) : %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0) : %d\n", (a < b) || (b > 0));
    printf("!(a < b)           : %d\n", !(a < b));

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    result = a;    // Assign
    printf("Initial result = %d\n", result);
    result += b;   // result = result + b
    printf("After += : %d\n", result);
    result *= 2;   // result = result * 2
    printf("After *= : %d\n", result);

    // Increment and Decrement
    printf("\nIncrement/Decrement:\n");
    int x = 5;
    printf("x   = %d\n", x);
    printf("x++ = %d (post-increment)\n", x++);
    printf("Now x = %d\n", x);
    printf("++x = %d (pre-increment)\n", ++x);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b  = %d (AND)\n", a & b);
    printf("a | b  = %d (OR)\n", a | b);
    printf("a ^ b  = %d (XOR)\n", a ^ b);
    printf("~a     = %d (NOT)\n", ~a);
    printf("a << 1 = %d (Left shift by 1)\n", a << 1);
    printf("a >> 1 = %d (Right shift by 1)\n", a >> 1);

    // Miscellaneous Operators
    printf("\nMiscellaneous Operators:\n");
    printf("Size of int = %zu bytes\n", sizeof(int));
    int max = (a > b) ? a : b;  // ternary operator
    printf("Max of a and b = %d\n", max);

    // Using math.h functions
    fresult = sqrt(16);  // square root
    printf("\nUsing sqrt(16) = %.2f\n", fresult);
    fresult = pow(2, 3); // 2 raised to power 3
    printf("Using pow(2,3) = %.2f\n", fresult);

    // Calling a function from user-defined header (if available)
    // myFunction();

    return 0;
}