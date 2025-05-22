#include <stdio.h>
#include "Prime.h"

int main()
{
    int n;
    printf("Enter a natural number (n > 1): ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Invalid input. Please enter a number greater than 1.\n");
        return 1;
    }
    print_primes_up_to(n);
    return 0;

    // Chạy chương trình : 
    // gcc Ex2.c Prime.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
