#include "Power.h"
#include <stdio.h>

// Normal function using loop
double power_iterative(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

// Recursive function
double power_recursive(double x, int n) {
    if (n == 0)
        return 1.0;
    // Điều kiện dừng / trường hợp dừng / điều kiện nhỏ nhất 
    // Nếu n = 0 thì trả về 1
    // Vì x^0 = 1
    // Sau đó trả ra kết quả cho các hàm trước đó
    // VD: P(5, 3) = 5 * P(5, 2)
    // P(5, 2) = 5 * P(5, 1)
    // P(5, 1) = 5 * P(5, 0)
    // P(5, 0) = 1
    return x * power_recursive(x, n - 1);
}
