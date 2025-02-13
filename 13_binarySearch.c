// Binary Search

#include <stdio.h>

// Function to perform Binary Search (Recursive)
int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;  // Finding the middle index

        if (arr[mid] == key)   // If element found at mid
            return mid;
        else if (arr[mid] < key)  // If key is greater, search right half
            return binarySearch(arr, mid + 1, high, key);
        else  // If key is smaller, search left half
            return binarySearch(arr, low, mid - 1, key);
    }
    return -1; // If element is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
