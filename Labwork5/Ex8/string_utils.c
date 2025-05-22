#include <stdio.h>
#include "string_utils.h"

void remove_char(char str[], char x) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != x) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';

    printf("String after removing '%c': %s\n", x, str);
}
