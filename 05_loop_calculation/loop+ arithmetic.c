#include <stdio.h>

int main(void) {
    int limit = 0;
    long long sum = 0;
    long long sum_squares = 0;
    long long sum_cubes = 0;

    printf("Enter a positive integer limit (N): ");
    if (scanf("%d", &limit) != 1 || limit < 1) {
        printf("Please enter a valid positive integer greater than 0.\n");
        return 1;
    }

    for (int i = 1; i <= limit; i++) {
        sum += i;
        sum_squares += (long long)i * i;
        sum_cubes += (long long)i * i * i;
    }

    printf("\n--- Results for Natural Numbers 1 to %d ---\n", limit);
    printf("Sum:            %lld\n", sum);
    printf("Sum of Squares: %lld\n", sum_squares);
    printf("Sum of Cubes:   %lld\n", sum_cubes);

    return 0;
}
