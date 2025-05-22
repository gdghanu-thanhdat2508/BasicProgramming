#include <stdio.h>

int soHoanHao(int n)
{
    long long tong = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            tong += i;
            if (i != n / i)
            {
                tong += n / i;
            }
        }
    }
    if (tong - n == n)
    {
        return 1;
    }
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
