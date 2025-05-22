#include <stdio.h>
#include "Divisor.h"
void print_divisors(int n) {
    printf("Divisors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}