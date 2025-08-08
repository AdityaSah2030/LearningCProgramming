#include <stdio.h>

// Function to modify a value using a pointer
void changeValue(int *p) {
    *p = 200; // modify the value at the address pointed by p
}

// Function to demonstrate double pointer modification
void changeValueDouble(int **pp) {
    **pp = 500; // dereference twice to modify original variable
}

int main() {
    // ---------- BASIC POINTER ----------
    int a = 10;
    int *p;       // pointer to int

    p = &a;       // store address of a in p

    printf("Value of a      : %d\n", a);
    printf("Address of a    : %p\n", &a);
    printf("Value of p      : %p (address stored)\n", p);
    printf("Value at *p     : %d (dereferenced)\n", *p);

    // ---------- MODIFYING VIA POINTER ----------
    *p = 20;
    printf("\nAfter modifying via pointer, a = %d\n", a);

    // ---------- POINTER ARITHMETIC ----------
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // array name acts like a pointer to first element

    printf("\nPointer arithmetic with array:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %d\n", ptr + i, *(ptr + i));
    }

    // ---------- DOUBLE POINTER ----------
    int x = 100;
    int *p1 = &x;     // pointer to int
    int **p2 = &p1;   // pointer to pointer to int

    printf("\nDouble pointer example:\n");
    printf("x   = %d\n", x);
    printf("*p1 = %d\n", *p1);
    printf("**p2 = %d\n", **p2);

    **p2 = 300; // modify x using double pointer
    printf("After modification via double pointer, x = %d\n", x);

    // ---------- POINTERS WITH FUNCTIONS ----------
    int num = 50;
    printf("\nPassing pointer to function:\n");
    changeValue(&num);
    printf("After changeValue, num = %d\n", num);

    changeValueDouble(&p1); // passing address of pointer
    printf("After changeValueDouble, x = %d\n", x);

    return 0;
}