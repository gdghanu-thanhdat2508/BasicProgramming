#include "Circum.h"
#include <stdio.h>

int main()
{
    // Write a C program to calculate an area and circumference of a circle
    // with a preassigned radius and with a radius input from the keyboard.

    // Ở đây chúng ta sẽ định nghĩa 1 func và chia ra làm 2 file riêng biệt .h và .c
    double radius, area, circumference;                   // Khai báo biến radius, area và circumference
    double fixed_radius = 5.0;                            // Bán kính cố định
    area = calculateArea(fixed_radius);                   // Tính diện tích hình tròn với bán kính cố định
    circumference = calculateCircumference(fixed_radius); // Tính chu vi hình tròn với bán kính cố định

    printf("Area of circle with fixed radius %.2f: %.2f\n", fixed_radius, area);                   // In ra diện tích hình tròn với bán kính cố định
    printf("Circumference of circle with fixed radius %.2f: %.2f\n", fixed_radius, circumference); // In ra chu vi hình tròn với bán kính cố định
    printf("Enter the radius of the circle: ");                                                    // Nhập bán kính từ bàn phím

    scanf("%lf", &radius);
    if (radius < 0)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    area = calculateArea(radius);
    circumference = calculateCircumference(radius);
    printf("Area of circle with radius input %.2f: %.2f\n", radius, area);

    printf("Circumference of circle with radius input %.2f: %.2f\n", radius, circumference);

    // Giải thích :
    // Ở đây chúng ta sẽ định nghĩa 1 func và chia ra làm 2 file riêng biệt .h và .c
    // Để có thể sử dụng được các hàm này, bạn cần phải include file Circum.h trong file Ex4.c
    // Chúng ta sẽ sử dụng 2 hàm calculateCircumference và calculateArea để tính chu vi và diện tích của hình tròn
    // Chúng ta sẽ sử dụng 1 biến fixed_radius để tính chu vi và diện tích của hình tròn với bán kính cố định
    // Chúng ta sẽ sử dụng 1 biến radius để tính chu vi và diện tích của hình tròn với bán kính nhập từ bàn phím
    // Chúng ta sẽ sử dụng 1 biến area để lưu diện tích của hình tròn
    // Chúng ta sẽ sử dụng 1 biến circumference để lưu chu vi của hình tròn

    // Chạy chương trình :
    // gcc Ex4.c Circum.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
    return 0;
}
