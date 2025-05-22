#include <stdio.h>
#include "Solve.h"

int main()
{
    double a, b, c, d, e, f;
    double x, y;

    printf("Solving the system:\n");
    printf("ax + by = c\n");
    printf("dx + ey = f\n\n");
    printf("Enter values for a, b, c, d, e, f:\n");
    
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    if (solve_equations(a, b, c, d, e, f, &x, &y)) {
        printf("Solution:\n");
        printf("x = %.2lf\n", x);
        printf("y = %.2lf\n", y);
    } else {
        printf("No unique solution exists (determinant is zero).\n");
    }
    return 0;

    // Chạy chương trình : 
    // gcc Ex5.c Solve.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
