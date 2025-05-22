// fibonacci.c
#include <stdio.h>
#include "Fibo.h"

// Cach 1 : Su dung vong lap
void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci (iterative): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Cach 2 : Su dung de quy
int fibonacci_recursive_term(int n) {
    // Voi so fibo se co 2 truong hop
    // 1. n = 0 -> 0
    // 2. n = 1 -> 1
    // Đây là 2 điều kiện dừng / điều kiện ban đầu của 1 hàm fibonacci 
    // Khi n chạy đến 0 hoặc 1 thì sẽ dừng lại và trả về giá trị cho các hàm trước đó
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursive_term(n - 1) + fibonacci_recursive_term(n - 2);
    // Để tính được số fibo thứ n thì ta sẽ cộng 2 số fibo trước đó lại với nhau
    // VD: F(5) = F(4) + F(3)
    // F(4) = F(3) + F(2)
    // F(3) = F(2) + F(1)
    // F(2) = F(1) + F(0)
    // F(1) = 1
    // F(0) = 0
}

// Recursive method to print series
void fibonacci_recursive(int n) {
    printf("Fibonacci (recursive): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive_term(i));
    }
    printf("\n");
}
