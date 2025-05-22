#include <stdio.h>
#include "Fac.h"

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid input. n must be >= 0.\n");
        return 1;
    }
    printf("Factorial (iterative): %lld\n", factorial_iterative(n));
    printf("Factorial (recursive): %lld\n", factorial_recursive(n));
    return 0;

    // Chạy chương trình : 
    // gcc Ex6.c Fac.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
