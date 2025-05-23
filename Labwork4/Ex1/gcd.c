#include "gcd.h"
int gcd_euclid(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_normal(int a, int b)
{
    int min = (a < b) ? a : b; // Đây là cách viết ngắn gọn hơn của if else
    // Nếu a < b thì min = a, ngược lại min = b
    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}