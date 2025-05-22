#include <stdio.h>
#include "Sum.h"

int main() {
    int n;
    printf("Enter a natural number n (n >= 1): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid input. n must be >= 1.\n");
        return 1;
    }
    double sum_iter = sum_series_iterative(n); // Cách dùng thông thường 
    double sum_rec = sum_series_recursive(n); // Cách dùng đệ quy 
    printf("Sum of series using iterative method: %.6f\n", sum_iter);
    printf("Sum of series using recursive method: %.6f\n", sum_rec);
    return 0;

    // Chạy chương trình : 
    // gcc Ex3.c Sum.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
