// Insertion Sort using Recursion

#include <stdio.h>

// Recursive insertion sort
void insertionSort(int arr[], int n, int index) {

    if (index == n)      // Base case: reached end of array
        return;

    int key = arr[index];
    int j = index - 1;

    // shift elements greater than key
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;    // insert at correct position

    insertionSort(arr, n, index + 1);   // move to next element
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertionSort(arr, n, 1);   // start from 2nd element

    printf("Sorted array using Recursive Insertion Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
