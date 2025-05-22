// main.c
#include <stdio.h>
#include <stdlib.h>
#include "MinMax.h"

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size. Must be a positive number.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, max;
    find_min_max(arr, n, &min, &max);

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    free(arr);
    return 0;

    // Chạy chương trình :
    // gcc Ex1.c MinMax.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
