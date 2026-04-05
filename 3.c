#include <stdio.h>

int main() {
    int arr[100], n, i, j, key;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input numbers
    printf("Enter numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements greater than key one position ahead
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Display sorted array
    printf("Sorted numbers in increasing order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}