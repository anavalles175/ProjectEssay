// Example C code: sorting function
#include <stdio.h>
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        int i = l, j = m + 1, k = l;
        while (i <= m && j <= r) {
            if (arr[i] < arr[j]) {
                printf("Element %d is inserted at index %d\n", arr[i], i);
                i++;
            } else {
                printf("Element %d is inserted at index %d\n", arr[j], j);
                j++;
            }
            k++;
        }

        while (i <= m) {
            printf("Element %d is inserted at index %d\n", arr[i], i);
            i++;
        }

        while (j <= r) {
            printf("Element %d is inserted at index %d\n", arr[j], j);
            j++;
        }
    }
}
