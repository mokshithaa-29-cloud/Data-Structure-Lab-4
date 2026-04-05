#include <stdio.h>

int main() {
    int prices[100], n, i, j, min_index, temp;

    // Input number of products
    printf("Enter number of products: ");
    scanf("%d", &n);

    // Input prices
    printf("Enter product prices:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        min_index = i;
        for(j = i + 1; j < n; j++) {
            if(prices[j] < prices[min_index]) {
                min_index = j;
            }
        }
        // Swap
        temp = prices[i];
        prices[i] = prices[min_index];
        prices[min_index] = temp;
    }

    // Display sorted prices
    printf("Sorted prices in increasing order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }

    return 0;
}