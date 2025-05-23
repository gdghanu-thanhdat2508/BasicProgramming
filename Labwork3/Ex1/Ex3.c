#include <stdio.h>
#include "Divisor.h"

int main()
{
    int n;
    printf("Enter a natural number (n > 1): ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Invalid input. Please enter a number greater than 1.\n");
        return 1;
    }

    print_divisors(n);
    return 0;

    // Chạy chương trình :
    // gcc Ex3.c Divisor.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
