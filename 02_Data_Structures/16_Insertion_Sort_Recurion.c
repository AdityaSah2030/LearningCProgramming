// Insertion Sort using Recursion

#include <stdio.h>

// Recursive insertion sort function
void insertionSort(int arr[], int n) {

    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSort(arr, n - 1);

    // Insert last element at correct position
    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertionSort(arr, n);

    printf("Sorted array using Recursive Insertion Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
