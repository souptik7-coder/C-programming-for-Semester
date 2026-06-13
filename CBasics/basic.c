#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("%d\n", a); // 10
    printf("%d\n", b); // 5

    a = 50;
    printf("After updating %d\n", a); // 50

    a = b; // 5
    printf("If b = 5 so a = %d\n", a); // 5

    return 0;
}