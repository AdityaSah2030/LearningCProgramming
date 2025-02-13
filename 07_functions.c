// Functions & Recursion

#include <stdio.h>  // Standard I/O library

// Function prototype (declaration)
int add(int a, int b);
int factorial(int n);

int main() {
    int num1, num2, sum, num, fact;

    // Function with parameters and return value
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);  // Function call
    printf("Sum = %d\n", sum);

    // Recursive function (Factorial)
    printf("\nEnter a number to find its factorial: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);

    return 0;  // Successful execution
}

// Function to add two numbers
int add(int a, int b) {
    return a + b;  // Returns the sum
}

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}
