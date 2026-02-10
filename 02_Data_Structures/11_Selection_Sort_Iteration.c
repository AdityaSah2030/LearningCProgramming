// Selection Sort using Iteration

#include <stdio.h>

int main() {
    int arr[100], n, i, j, minIndex, temp;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Selection Sort logic
    // Step 1: Move boundary of unsorted array
    for (i = 0; i < n - 1; i++) {

        // Assume current index is minimum
        minIndex = i;

        // Step 2: Find minimum element in remaining unsorted array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;   // Update index of minimum element
            }
        }

        // Step 3: Swap minimum element with current element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Display sorted array
    printf("Sorted array using Selection Sort:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
