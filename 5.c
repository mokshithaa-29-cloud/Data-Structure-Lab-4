#include <stdio.h>

// Function to merge two halves
void merge(int arr[], int low, int mid, int high) {
    int temp[100];
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while(i <= mid) {
        temp[k++] = arr[i++];
    }

    while(j <= high) {
        temp[k++] = arr[j++];
    }

    // Copy back to original array
    for(i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[100], n, i;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input roll numbers
    printf("Enter roll numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Display sorted roll numbers
    printf("Sorted roll numbers:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}