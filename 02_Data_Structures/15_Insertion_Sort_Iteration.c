// Insertion Sort using Iteration

#include <stdio.h>

int main() {
    int arr[100], n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Insertion Sort logic
    for (i = 1; i < n; i++) {
        key = arr[i];      // Element to be inserted
        j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  // Place key at correct position
    }

    printf("Sorted array using Insertion Sort:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
