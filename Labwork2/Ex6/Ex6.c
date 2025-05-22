#include <stdio.h>
#include "Month.h"

int main()
{
    // Using switch…case statement, enter any month in the numeric format and display
    // the number of days in that month.

    int month;
    printf("Enter a month (1–12):");
    scanf("%d", &month);
    if (month < 0) {
        printf("Invalid month. Please enter a number from 1 to 12.\n");
    } else {
        int days = get_days_in_month(month);
        days == -1 ? printf("Invalid month. Please enter a number from 1 to 12.\n") : printf("Number of days in month %d is %d.\n", month, days);
        // Đây là cách viết ngắn gọn của if else
        // Nếu days == -1 thì in ra thông báo lỗi
        // Nếu không thì in ra số ngày trong tháng
        // Cách viết này giúp code ngắn gọn hơn
    }
    return 0;

    // Chạy chương trình : 
    // gcc Ex6.c Month.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
