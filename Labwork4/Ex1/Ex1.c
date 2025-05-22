#include <stdio.h>
#include "gcd.h"

int main() {
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Both numbers must be positive.\n");
        return 1;
    }

    printf("GCD (Euclidean method): %d\n", gcd_euclid(a, b));
    printf("GCD (Naive method): %d\n", gcd_normal(a, b));

    return 0;
    // Chạy chương trình : 
    // gcc Ex1.c gcd.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
