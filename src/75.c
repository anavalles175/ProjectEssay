#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    }

    return 0;
}
