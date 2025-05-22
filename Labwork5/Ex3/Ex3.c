#include <stdio.h>
#include "sort.h"
#define N 10

int main()
{
    int original[N] = {34, 7, 23, 32, 5, 62, 19, 4, 41, 15};
    int arr[N];

    printf("Original array:\n");
    print_array(original, N);

    // Bubble Sort
    for (int i = 0; i < N; i++)
        arr[i] = original[i];
    bubble_sort(arr, N);
    printf("\nBubble sort:\n");
    print_array(arr, N);

    // Insertion Sort
    for (int i = 0; i < N; i++)
        arr[i] = original[i];
    insertion_sort(arr, N);
    printf("\nInsertion sort:\n");
    print_array(arr, N);

    // Selection Sort
    for (int i = 0; i < N; i++)
        arr[i] = original[i];
    selection_sort(arr, N);
    printf("\nSelection sort:\n");
    print_array(arr, N);

    return 0;
}
