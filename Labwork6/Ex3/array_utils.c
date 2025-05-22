#include <stdio.h>
#include "array_utils.h"

void print_array_with_pointers(int *arr, int size) {
    printf("Array elements using pointers:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(arr + i));
    }
}