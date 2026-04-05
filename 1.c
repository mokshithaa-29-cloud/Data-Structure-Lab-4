#include <stdio.h>

int main() {
    int marks[100], n, i, j, temp;

//Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input marks
    printf("Enter marks:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(marks[j] > marks[j + 1]) {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display sorted marks
    printf("Sorted marks in increasing order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }

    return 0;
}