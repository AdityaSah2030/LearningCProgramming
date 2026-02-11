// Quick Sort (using first element as pivot)

#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function (first element as pivot)
int partition(int arr[], int low, int high) {
    int pivot = arr[low];     // First element as pivot
    int i = low + 1;
    int j = high;

    while (1) {

        // move i forward while elements are smaller than pivot
        while (i <= high && arr[i] <= pivot)
            i++;

        // move j backward while elements are greater than pivot
        while (arr[j] > pivot)
            j--;

        if (i < j) {
            swap(&arr[i], &arr[j]);
        } 
        else {
            break;
        }
    }

    // place pivot at correct position
    swap(&arr[low], &arr[j]);
    return j;
}

// Quick sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // left part
        quickSort(arr, pi + 1, high);  // right part
    }
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array using Quick Sort (first element pivot):\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
