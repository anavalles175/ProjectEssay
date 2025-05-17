#include <stdio.h>

void sum(int num1, int num2) {
    printf("%d + %d = %d\n", num1, num2, (num1 + num2));
}

int main() {
    int a = 3, b = 5;
    sum(a, b);
    return 0;
}
