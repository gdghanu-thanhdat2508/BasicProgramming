#include <stdio.h>
#include "string_utils.h"

int main() {
    char str[200];
    char x;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    printf("Enter the character to remove: ");
    scanf(" %c", &x);  
    remove_char(str, x);
    return 0;
}
