// main.c
#include <stdio.h>
#include "DigitProduct.h"

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int product = product_of_digits(number);
    printf("Product of digits: %d\n", product);

    return 0;
    // Chạy chương trình : 
    // gcc Ex4.c DigitProduct.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
