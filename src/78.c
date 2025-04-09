#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 10) {
        printf("%d", i);
        if (i == 7) break; // Modify this line to allow for better error handling
        i++;
    }
}
