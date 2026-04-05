#include <stdio.h>

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    int i, j, pivot, temp;

    if(low < high) {
        pivot = arr[low];  // choose first element as pivot
        i = low;
        j = high;

        while(i < j) {
            while(arr[i] <= pivot && i < high)
                i++;
            while(arr[j] > pivot)
                j--;

            if(i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Place pivot in correct position
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        // Recursive calls
        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

int main() {
    int arr[100], n, i;

    // Input number of roll numbers
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input roll numbers
    printf("Enter roll numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    // Display sorted roll numbers
    printf("Sorted roll numbers:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}