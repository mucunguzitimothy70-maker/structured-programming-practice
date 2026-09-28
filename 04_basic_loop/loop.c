#include <stdio.h>
//EXERCISE 4.11
int main(vl) {
    long long sum = 0;
    int count = 0;

    for (int i = 1; i <= 100; i++) {
        
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
