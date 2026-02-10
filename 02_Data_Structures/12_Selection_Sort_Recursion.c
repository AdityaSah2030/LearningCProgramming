// Selection Sort using Recursion

#include <stdio.h>

// Recursive Selection Sort function
void selectionSort(int arr[], int n, int index) {

    // Base case: if starting index reaches end
    if (index >= n - 1)
        return;

    int minIndex = index;

    // Find minimum element in remaining array
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    // Swap current element with minimum element
    if (minIndex != index) {
        int temp = arr[index];
        arr[index] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Recursive call for next position
    selectionSort(arr, n, index + 1);
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Call recursive selection sort
    selectionSort(arr, n, 0);

    // Display sorted array
    printf("Sorted array using Recursive Selection Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
