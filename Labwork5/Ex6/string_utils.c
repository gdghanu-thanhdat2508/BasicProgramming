#include <stdio.h>
#include <string.h>
#include "string_utils.h"

void reverse_string(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}
