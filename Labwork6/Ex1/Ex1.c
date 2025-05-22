#include <stdio.h>
#include "pointer_utils.h"

int main() {
    int x, y, result;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    add_with_pointers(&x, &y, &result);

    printf("Sum of %d and %d is: %d\n", x, y, result);

    return 0;
}
