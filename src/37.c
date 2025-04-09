#include <stdio.h>

int main() {
    int i;
    int arr[5];

    for (i = 0; i < 5; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array is %d", arr[2]);

    return 0;
}
