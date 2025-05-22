#include <stdio.h>
#include "gcd.h"

int main() {
    int a, b, c, d;

    printf("Enter 4 positive integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printf("All numbers must be positive integers.\n");
        return 1;
    }

    int result = gcd(gcd(a, b), gcd(c, d));

    printf("GCD of %d, %d, %d, and %d is: %d\n", a, b, c, d, result);
    return 0;
}
