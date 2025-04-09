#include <stdio.h>

void main() {
    int i;
    printf("Enter how many values you want to add: ");
    scanf("%d", &i);

    if (i > 0) {
        for (i; i >= 1; --i) {
            printf("*");
        }
    } else {
        printf("Please enter a positive integer.");
    }

    printf("\n");
}
