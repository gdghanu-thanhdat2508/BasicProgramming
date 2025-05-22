#include <stdio.h>
#include "LeapYear.h" // Include the header file for the leap year function

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year < 0) {
        // Kiểm tra nếu năm là số âm
        // Nếu năm âm, in ra thông báo lỗi
        printf("Invalid year. Please enter a positive integer.\n");
        return 1; // Khi gặp lỗi, return 1 để báo lỗi
    }
    if (is_leap_year(year)) { // Kiểm tra xem năm có phải là năm nhuận hay không
        // Nếu năm là năm nhuận, in ra is a leap year.
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;

    // Chạy chương trình : 
    // gcc Ex4.c LeapYear.c -o ten_chuong_trinh
    // ./ten_chuong_trinh
    // LƯU Ý ĐỂ Ý ĐƯỜNG DẪN !!!
}
