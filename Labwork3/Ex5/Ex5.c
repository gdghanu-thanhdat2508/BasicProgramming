// main.c
#include <stdio.h>
#include "Fibo.h"

int main() {
    int n;
    printf("Enter the number of terms (n > 0): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a number greater than 0.\n");
        return 1;
    }
    fibonacci_iterative(n);
    fibonacci_recursive(n);

    return 0;

    // Chạy chương trình : 
    // gcc Ex5.c Fibo.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
