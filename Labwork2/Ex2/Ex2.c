#include <stdio.h>
#include "MinMax.h"

int main()
{
    // Given three numbers and write a C program to find the minimum and the maximum
    // among these numbers 

    double num1, num2, num3;

    printf("Enter three numbers:\n");

    printf("Number 1: ");
    scanf("%lf", &num1);
    printf("Number 2: ");
    scanf("%lf", &num2);
    printf("Number 3: ");
    scanf("%lf", &num3);
    // Có thể scanf trên cùng 1 dòng, có thể dùng cách này nếu không quen !!

    double min = find_min(num1, num2, num3);
    double max = find_max(num1, num2, num3);

    printf("Minimum value: %.2f\n", min);
    printf("Maximum value: %.2f\n", max);

    // Chạy chương trình : 
    // gcc Ex2.c MinMax.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
    return 0;
}
