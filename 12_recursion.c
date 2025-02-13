// Recursion

#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1)  // Base Case: factorial(0) and factorial(1) are 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive Case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Taking user input

    if (num < 0) 
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num));  // Calling recursive function

    return 0;
}
