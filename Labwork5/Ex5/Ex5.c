#include <stdio.h>
#include "matrix_utils.h"

int main() {
    int n;
    int a[100][100];

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    input_matrix(a, n);

    int sum = sum_matrix(a, n);
    printf("Sum of all elements = %d\n", sum);

    print_transpose(a, n);

    return 0;
}
