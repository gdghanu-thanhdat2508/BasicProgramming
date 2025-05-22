#include "Sum.h"
void calculate_even_odd_sum(int n, int *even_sum, int *odd_sum) {
    *even_sum = 0;
    *odd_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            *even_sum += i;
        else
            *odd_sum += i;
    }
}