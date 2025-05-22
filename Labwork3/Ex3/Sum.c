#include "Sum.h"

double sum_series_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;

    // Cách làm bình thường dễ hơn 
}

double sum_series_recursive(int n) {
    if (n == 1) return 1.0; // TH khởi tạo, khi gặp đến n == 1 thì dừng lại và trả về 1.0
    // cho các Func gọi sau sẽ lấy kết quảs của Func này để tính toán 

    // Sử dụng đệ quy, mỗi lần gọi hàm sẽ giảm n đi 1
    // và cộng dồn vào kết quả của hàm trước đó
    // 1/n + 1/(n-1) + 1/(n-2) + ... + 1/1
    // 1/n + sum_series_recursive(n - 1);
    return 1.0 / n + sum_series_recursive(n - 1); // Sử dụng đệ quy 
}