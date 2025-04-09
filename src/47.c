#include <stdio.h>

int main() {
    int i;
    printf("Enter how many lines you want to write:");
    scanf("%d", &i);
    
    for (i--; i >= 1; i--) {
        printf("* ");
    }
    return 0;
}
