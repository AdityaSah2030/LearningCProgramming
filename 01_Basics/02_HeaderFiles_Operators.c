/*
=============================================
MOST COMMON C HEADER FILES AND THEIR USES
=============================================

<stdio.h>    → Standard input/output functions
                printf(), scanf(), getchar(), putchar()

<stdlib.h>   → Memory allocation, conversions, utilities
                malloc(), calloc(), free(), exit(), atoi()

<string.h>   → String handling
                strlen(), strcpy(), strcat(), strcmp()

<math.h>     → Mathematical functions
                sqrt(), pow(), sin(), cos(), log()

<ctype.h>    → Character handling
                isdigit(), isalpha(), toupper(), tolower()

<time.h>     → Date and time functions
                time(), clock(), difftime()

<limits.h>   → Limits of data types
                INT_MAX, INT_MIN etc.

<float.h>    → Float limits
                FLT_MAX, DBL_MAX etc.

<stdbool.h>  → Boolean type (true/false)
                bool, true, false

<conio.h>    → Console I/O (Windows only)
                getch(), clrscr()  (not standard C)
=============================================
*/

#include <stdio.h> 
#include <math.h>  

// User-defined header file (created in same directory)
// #include "myheader.h"  // This will work only if "myheader.h" exists

int main()
{
    int a = 10, b = 3;
    int result;
    float fresult;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");                // Arithmetic Operators:
    printf("a + b = %d\n", a + b);                    // a + b = 13
    printf("a - b = %d\n", a - b);                    // a - b = 7
    printf("a * b = %d\n", a * b);                    // a * b = 30
    printf("a / b = %d (integer division)\n", a / b); // a / b = 3 (integer division)
    printf("a %% b = %d (remainder)\n", a % b);       // a % b = 1 (remainder)

    // Relational Operators
    printf("\nRelational Operators:\n"); // Relational Operators:
    printf("a > b : %d\n", a > b);       // a > b : 1
    printf("a < b : %d\n", a < b);       // a < b : 0
    printf("a == b: %d\n", a == b);      // a == b: 0
    printf("a != b: %d\n", a != b);      // a != b: 1

    // Logical Operators
    printf("\nLogical Operators:\n");                        // Logical Operators:
    printf("(a > b) && (b > 0) : %d\n", (a > b) && (b > 0)); // 1
    printf("(a < b) || (b > 0) : %d\n", (a < b) || (b > 0)); // 1
    printf("!(a < b)           : %d\n", !(a < b));           // 1

    // Assignment Operators
    printf("\nAssignment Operators:\n");     // Assignment Operators:
    result = a;                              // result = 10
    printf("Initial result = %d\n", result); // 10
    result += b;                             // result = 13
    printf("After += : %d\n", result);       // 13
    result *= 2;                             // result = 26
    printf("After *= : %d\n", result);       // 26

    // Increment and Decrement
    printf("\nIncrement/Decrement:\n"); // Increment/Decrement:
    int x = 5;
    printf("x   = %d\n", x);                    // 5
    printf("x++ = %d (post-increment)\n", x++); // 5
    printf("Now x = %d\n", x);                  // 6
    printf("++x = %d (pre-increment)\n", ++x);  // 7

    // Bitwise Operators
    printf("\nBitwise Operators:\n");                   // Bitwise Operators:
    printf("a & b  = %d (AND)\n", a & b);               // 2
    printf("a | b  = %d (OR)\n", a | b);                // 11
    printf("a ^ b  = %d (XOR)\n", a ^ b);               // 9
    printf("~a     = %d (NOT)\n", ~a);                  // -11
    printf("a << 1 = %d (Left shift by 1)\n", a << 1);  // 20
    printf("a >> 1 = %d (Right shift by 1)\n", a >> 1); // 5

    // Misc Operators
    printf("\nMiscellaneous Operators:\n");           // Miscellaneous Operators:
    printf("Size of int = %zu bytes\n", sizeof(int)); // Usually 4 bytes
    int max = (a > b) ? a : b;                        // max = 10
    printf("Max of a and b = %d\n", max);             // 10

    // math.h functions
    fresult = sqrt(16);
    printf("\nUsing sqrt(16) = %.2f\n", fresult); // 4.00

    fresult = pow(2, 3);
    printf("Using pow(2,3) = %.2f\n", fresult); // 8.00

    return 0;
}
