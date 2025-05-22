#include <stdio.h>
#include "matrix_utils.h"

void input_matrix(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

int sum_matrix(int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += a[i][j];
    return sum;
}

void print_transpose(int a[][100], int n) {
    printf("Transposed matrix:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
