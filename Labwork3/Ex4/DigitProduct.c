#include "DigitProduct.h"

int product_of_digits(int number) {
    int product = 1;
    while (number > 0) {
        int digit = number % 10; // Lấy chữ số cuối cùng
        product *= digit; // Sau đó nhân vào 
        number /= 10; // Sau khi sử dụng xong thì bỏ đi
        // Bỏ đi chữ số cuối cùng
        // VD: 1234 -> 123
    }
    return product;
}