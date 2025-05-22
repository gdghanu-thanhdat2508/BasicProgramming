#include <stdio.h>
#include "Swap.h"

int main()
{
    // Write a C program to swap the values of two variables without using a third one. 

    // Có 3 cách để swap 2 biến
    // 1. Sử dụng biến tạm thời
    // 2. Sử dụng phép toán cộng và trừ
    // 3. Sử dụng phép toán nhân và chia
    int x, y;

    printf("Enter two integers:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    // Method 1: Sử dụng biến tạm thời
    printf("\n-- Sử dụng biến tạm thời --\n");
    int a1 = x, b1 = y;
    swap_temp(&a1, &b1);
    printf("After swap: x = %d, y = %d\n", a1, b1);

    // Method 2: Sử dụng phép toán cộng và trừ
    printf("\n-- Sử dụng phép toán cộng và trừ --\n");
    int a2 = x, b2 = y;
    swap_add_sub(&a2, &b2);
    printf("After swap: x = %d, y = %d\n", a2, b2);

    // Method 3: Sử dụng phép toán nhân và chia
    printf("\n-- Sử dụng phép toán nhân và chia --\n");
    int a3 = x, b3 = y;
    if (a3 == 0 || b3 == 0) {
        printf("Không thể swap bởi vì có 2 biến 0\n");
    } else {
        swap_mul_div(&a3, &b3);
        printf("After swap: x = %d, y = %d\n", a3, b3);
    }


    // Chạy chương trình : 
    // gcc Ex3.c Swap.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
    return 0;
}
