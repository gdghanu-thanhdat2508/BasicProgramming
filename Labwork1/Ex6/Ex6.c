#include <stdio.h>
#include <math.h>
#include "Expression.h" // Đây là file header chứa định nghĩa hàm calculate_expression
// Hàm này sẽ tính giá trị của biểu thức (3a - b) / (3 - 2sqrt(c))

int main()
{
    double a, b, c, result; // Khai báo biến a, b, c và result

    printf("Enter values for a, b, and c:\n");
    printf("Input a, b, c :");
    scanf("%lf %lf %lf", &a, &b, &c); // Nhập giá trị của a, b và c từ bàn phím
    result = calculate_expression(a, b, c);
    printf("Result: %.2f\n", result); // In ra kết quả của biểu thức
    return 0;

    // Chạy chương trình : 
    // gcc Ex6.c Expression.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
