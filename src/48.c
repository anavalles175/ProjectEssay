// 1. Write a C program that calculates the factorial of a given number.
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Factorial is not defined for non-positive integers.\n");
        return 1;
    }
    
    long result = 1;
    while (n > 0) {
        result *= n--;
    }
    
    printf("The factorial of %d is %ld\n", n, result);
    
    return 0;
}
