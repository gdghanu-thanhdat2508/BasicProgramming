#include <stdio.h>
#include "Month.h"

int get_days_in_month(int month) {
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12: // Gộp các tháng có 31 ngày
            return 31;

        case 4: case 6: case 9: case 11:
            return 30;

        case 2:
            return 28;  

        default:
            return -1; 
    }
}