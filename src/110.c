#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n) {
    if (n <= 1)
        printf("%d", n);
    else {
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            int temp = a + b;
            a = b;
            b = temp;
            printf("%d", b);
        }
        printf("\n");
    }
}

void main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        fibonacci(num);
    } else {
        printf("Error: Integer must be greater than 0.\n");
    }
}
