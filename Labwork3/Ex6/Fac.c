#include "Fac.h"

long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorial_recursive(int n) {
    if (n == 0 || n == 1) return 1;
    // Có 2 điều kiện dừng, đó là n = 0 hoặc n = 1
    // Sau khi đi đến điều kiện dừng thì sẽ trả về 1
    // Và các hàm trước đó sẽ lấy giá trị này để tính toán
    // VD: F(5) = 5 * F(4)
    // F(4) = 4 * F(3)
    // F(3) = 3 * F(2)
    // F(2) = 2 * F(1)
    // F(1) = 1
    // F(0) = 1
    return n * factorial_recursive(n - 1);
}
