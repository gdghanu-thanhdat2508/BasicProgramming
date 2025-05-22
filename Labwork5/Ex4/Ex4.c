#include <stdio.h>
#include "array_sum.h"

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 

    input_array(arr, n);

    int sum = sum_array(arr, n);
    printf("Sum of the array elements: %d\n", sum);

    return 0;
}
