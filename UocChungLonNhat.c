#include <stdio.h>
#include <math.h>
int main()
{
    long long b;
    scanf("%lld", &b);
    long long tong_uoc_so = 0;
    for (long long i = 1; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {
            tong_uoc_so++;
            if (b / i != i)
            {
                tong_uoc_so++;
            }
        }
    }
    printf("%d", tong_uoc_so);
    return 0;
}