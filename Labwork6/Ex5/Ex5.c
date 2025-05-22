#include <stdio.h>
#include "func_utils.h"

int main() {
    int x = 5, y = 7;

    // Khai báo con trỏ tới hàm: nhận 2 int, trả về int
    int (*func_ptr)(int, int);

    // Gán địa chỉ của hàm add vào con trỏ
    func_ptr = &add;

    // Gọi hàm thông qua con trỏ
    int result = func_ptr(x, y);

    printf("Sum of %d and %d is: %d\n", x, y, result);

    return 0;
}
