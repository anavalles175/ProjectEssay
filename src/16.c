#include <stdio.h>

void main() {
    int i;
    int array[5];
    
    // Generate 5 random integers between -100 and 100
    for (i = 0; i < 5; ++i) {
        array[i] = rand() % 200 + 100;
    }
    
    // Output the array of random numbers
    printf("Random Numbers: ");
    for (int j = 0; j < 5; ++j) {
        printf("%d ", array[j]);
    }
}
