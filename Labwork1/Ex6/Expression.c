#include "Expression.h"
#include <math.h>
#include <stdio.h>

// Đây là file header chứa định nghĩa hàm calculate_expression
double calculate_expression(double a, double b, double c) {
    return ((3 * a) - pow(c, 3) - (2 * sqrt(c)));
    // Nên thêm ngoặc tròn để cẩn thẩn hơn và đảm bảo ra đúng kết quả
}