#include <stdio.h>

int main() {
    int i;
    
    printf("Hello, World!\n");
    
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    
    return 0;
}
