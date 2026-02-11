// Merge Sort

#include <stdio.h>

// Function to merge two sorted subarrays
void merge(int arr[], int low, int mid, int high) {
    int temp[100];
    int i = low;      // Starting index of left subarray
    int j = mid + 1;  // Starting index of right subarray
    int k = low;      // Starting index of temp array

    // Merge the two subarrays into temp[]
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left subarray
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements of right subarray
    while (j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy merged elements back to original array
    for (i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        // Sort first half
        mergeSort(arr, low, mid);

        // Sort second half
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array using Merge Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
