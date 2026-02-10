// Program to demonstrate input and output of different data types in C

#include <stdio.h>  // Standard I/O header file

int main() {
    // Variable declarations of different data types
    int intNum;
    float floatNum;
    double doubleNum;
    char charValue;
    long longNum;
    short shortNum;

    // Input from the user
    printf("Enter an Integer: ");
    scanf("%d", &intNum);

    printf("Enter a Float: ");
    scanf("%f", &floatNum);

    printf("Enter a Double: ");
    scanf("%lf", &doubleNum);

    printf("Enter a Character: ");
    scanf(" %c", &charValue); // Note the space before %c to consume any leftover newline

    printf("Enter a Long Integer: ");
    scanf("%ld", &longNum);

    printf("Enter a Short Integer: ");
    scanf("%hd", &shortNum);

    // Output to the console
    printf("\n---- OUTPUT ----\n");
    printf("Integer Entered     : %d\n", intNum);
    printf("Float Entered       : %.2f\n", floatNum);       // 2 decimal places
    printf("Double Entered      : %.3lf\n", doubleNum);      // 3 decimal places
    printf("Character Entered   : %c\n", charValue);
    printf("Long Integer Entered: %ld\n", longNum);
    printf("Short Integer Entered: %hd\n", shortNum);

    return 0;  // Successful execution
}
