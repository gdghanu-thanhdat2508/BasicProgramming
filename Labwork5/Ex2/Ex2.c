#include <stdio.h>
#include "Sum.h"
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. n must be positive.\n");
        return 1;
    }
    int even_sum, odd_sum;
    calculate_even_odd_sum(n, &even_sum, &odd_sum);
    printf("Sum of even numbers from 1 to %d = %d\n", n, even_sum);
    printf("Sum of odd numbers from 1 to %d = %d\n", n, odd_sum);

    return 0;
    // Chạy chương trình : 
    // gcc Ex2.c Sum.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
