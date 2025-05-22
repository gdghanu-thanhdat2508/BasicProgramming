#include <stdio.h>
int main() {
    int a = 42;
    int *p1 = &a;       
    int **p2 = &p1;    
    int *p3[10];       

    p3[0] = &a;         

    printf("*p1 = %d\n", *p1);         // 42
    printf("**p2 = %d\n", **p2);       // 42
    printf("*p3[0] = %d\n", *p3[0]);   // 42

    return 0;
}
