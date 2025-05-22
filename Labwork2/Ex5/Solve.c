#include "Solve.h"

// Chúng ta sử dụng Cramer's Rule để giải bài này 
// D=ae−bd
// Dx=ce−bf
// Dy=af−cd
// x=Dx/D
// y=Dy/D
// Nếu D=0 thì phương trình vô nghiệm hoặc có vô số nghiệm
// Nếu D!=0 thì phương trình có nghiệm duy nhất
int solve_equations(double a, double b, double c, double d, double e, double f, double *x, double *y) {
    double D = a * e - b * d; // Khai báo biến D
    // Tính định thức D
    // Nếu D = 0 thì phương trình vô nghiệm hoặc có vô số nghiệm
    // Nếu D != 0 thì phương trình có nghiệm duy nhất
    if (D == 0) {
        return 0;
    }
    double Dx = c * e - b * f; 
    double Dy = a * f - c * d;
    *x = Dx / D;
    *y = Dy / D;
    return 1; 
    // Trong C 1 thì là true, 0 thì là false
}