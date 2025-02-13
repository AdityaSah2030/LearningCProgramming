// Bubble Sort Algorithm

#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for swapping
            if (arr[j] > arr[j + 1]) {  // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    printf("Original Array: ");
    printArray(arr, n);

    bubbleSort(arr, n);  // Sorting function call

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
