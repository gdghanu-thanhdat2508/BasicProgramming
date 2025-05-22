#include <stdio.h>
#include "string_utils.h"

void find_char_a(const char str[]) {
    int count = 0;
    printf("Positions of character 'a': ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal number of 'a': %d\n", count);
}
