#include <stdio.h>

int main() {
    long sum = 0;
    int count = 0;

    
    for (int i = 1; i <= 100; i++) {
        // Check if i is a multiple of 7
        if (i % 7 == 0) {
            sum += i;
            count++;
        }
    }

    printf("--- Multiples of 7 from 1 to 100 ---\n");
    printf("Total multiples found: %d\n", count);
    printf("Sum of all multiples:  %lld\n", sum);

    return 0;
}

