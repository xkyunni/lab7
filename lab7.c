#include <stdio.h>

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, swaps;

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        swaps = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
        printf("Number of swaps needed for index %d: %d\n", i, swaps);
    }

    return 0;
}
