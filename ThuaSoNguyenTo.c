#include <stdio.h>
// Bài 13. Bậc của thừa số nguyên tố trong N!

// Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x.

// Ví dụ với N = 7, p = 3 thì x = 2 là số lớn nhất để 7 !Chia hết cho 3 ^ 2.
// input 7 3
// output 2

// Nhan luy thua la cong don so mu
long long bac(long long n, long long p)
{
    long long ans = 0;
    for (long long i = p; i <= n; i *= p)
    {
        ans += n / i;
    }
    return ans;
}
int main()
{
    // Chi can phan tich thua so nguyen to cua 10!
    bac(10, 2);
    return 0;
}