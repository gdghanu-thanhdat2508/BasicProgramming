#include <stdio.h>
#include "Polynomial.h"

int main()
{
    // Write a C program to calculate a value of a polynomial 𝑎𝑥2 + 𝑏𝑥 + 𝑐
    // with three known constant parameters a=1, b=2, and c=1 and the variable 𝑥 input
    // from the keyboard

    // Ở đây chúng ta sẽ định nghĩa 1 func và chia ra làm 2 file riêng biệt .h và .c
    double x, result; // Khai báo biến x và result
    printf("Enter the value of x: ");
    scanf("%lf", &x); // Nhập giá trị của x từ bàn phím
    result = evaluate_polynomial(x); // Gọi hàm evaluate_polynomial để tính giá trị của đa thức
    printf("The value of the polynomial f(x) = %dx^2 + %dx + %d at x = %.2f is: %.2f\n",
           A, B, C, x, result); // In ra giá trị của đa thức tại x
    return 0;

    // Chạy chương trình : 
    // gcc Ex5.c Polynomial.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
