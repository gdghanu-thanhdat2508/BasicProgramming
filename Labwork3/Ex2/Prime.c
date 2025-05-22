#include <stdio.h>
#include <math.h>
#include "Prime.h"

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) { // Sqrt(n) là căn bậc 2 của number
        // Sqrt n để loại bỏ những trường hợp bị lặp  VD : 6 × 6 = 36 
        if (n % i == 0) return 0;
    }
    return 1;
}

void print_primes_up_to(int n) {
    printf("Prime numbers from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
