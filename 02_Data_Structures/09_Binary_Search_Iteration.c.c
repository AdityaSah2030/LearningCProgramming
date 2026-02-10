// Binary Search using Iteration

#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid, found = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d\n", found);

    return 0;
}
