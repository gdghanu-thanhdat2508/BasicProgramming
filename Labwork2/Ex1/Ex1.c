#include <stdio.h>
#include "Temp.h"
int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius); // Nhập số celsius từ bàn phím
    // Chuyển đổi Celsius sang Fahrenheit
    // Sử dụng hàm celsius_to_fahrenheit từ Temp.h và Temp.c
    fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%.2f\u00B0C is equivalent to %.2f \u00B0C F\n", celsius, fahrenheit);
    return 0;

    // FUN FACT : Ký hiệu độ có thể dùng \u00B0C để có thể hiển thị 

    // Chạy chương trình : 
    // gcc Ex1.c Temp.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
