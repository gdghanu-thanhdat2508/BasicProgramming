// swap.c
#include "Swap.h"
#include <stdio.h>

// Khác với các hàm khác, ở đây chúng ta sử dụng dâu * để truyền tham số vào hàm
// Điều này có nghĩa là chúng ta sẽ truyền địa chỉ của biến vào hàm
// Khi đó, hàm sẽ thay đổi giá trị của biến ở bên ngoài hàm

// Điều này có thể học trong bài con trỏ (Pointer)

// Method 1: Sử dụng biến tạm thời
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Sử dụng phép toán cộng và trừ
void swap_add_sub(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Sử dụng phép toán nhân và chia
void swap_mul_div(int *a, int *b) {
    if (*a != 0 && *b != 0) {
        *a = *a * *b;
        *b = *a / *b;
        *a = *a / *b;
    }
}
