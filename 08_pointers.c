// Pointers & Dynamic Memory Allocation

#include <stdio.h>   // Standard I/O library
#include <stdlib.h>  // For malloc() and free()

int main() {
    int num = 10;
    int *ptr;  // Pointer declaration

    // Assigning address of num to ptr
    ptr = &num;

    // Displaying value and address
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value using pointer: %d\n", *ptr);
    printf("Pointer address: %p\n", ptr);

    // Pointer arithmetic
    int arr[3] = {10, 20, 30};
    int *p = arr;  // Pointer to array

    printf("\nPointer arithmetic:\n");
    printf("First element: %d\n", *p);
    printf("Second element: %d\n", *(p + 1));
    printf("Third element: %d\n", *(p + 2));

    // Dynamic memory allocation
    int *dynArr;
    int size, i;

    printf("\nEnter size of array: ");
    scanf("%d", &size);

    // Allocating memory dynamically
    dynArr = (int *)malloc(size * sizeof(int));

    if (dynArr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input in dynamically allocated array
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &dynArr[i]);
    }

    // Displaying dynamic array elements
    printf("Elements in dynamic array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", dynArr[i]);
    }
    printf("\n");

    // Freeing allocated memory
    free(dynArr);

    return 0;  // Successful execution
}
