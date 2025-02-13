// Basic Input/Output & Variables in C

#include <stdio.h>  // Standard I/O library

int main() {
    // Declaring variables of different data types
    int age;
    float height;
    char grade;

    // Taking integer input
    printf("Enter your age: ");
    scanf("%d", &age);  // %d is format specifier for integers

    // Taking float input
    printf("Enter your height in meters: ");
    scanf("%f", &height);  // %f is format specifier for floats

    // Taking character input
    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);  // Space before %c avoids newline issue

    // Displaying the values entered by the user
    printf("\n--- Your Details ---\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);  // .2f prints two decimal places
    printf("Grade: %c\n", grade);

    return 0;  // Returning 0 indicates successful execution
}
