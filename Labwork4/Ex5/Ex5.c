#include <stdio.h>
#include "Power.h"

int main() {
    double x;
    int n;

    printf("Enter base x: ");
    scanf("%lf", &x);
    printf("Enter exponent n (non-negative): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Only non-negative exponents are supported.\n");
        return 1;
    }

    printf("Result using normal function: %.4lf\n", power_iterative(x, n));
    printf("Result using recursive function: %.4lf\n", power_recursive(x, n));
    return 0;

    // Chạy chương trình : 
    // gcc Ex5.c Power.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}