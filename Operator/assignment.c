#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("%d\n", a = b);    // a = 10
    printf("%d\n", a += b);   // a = a + b = 20
    printf("%d\n", a -= b);   // a = a - b = 10
    printf("%d\n", a *= b);   // a = a * b = 100
    printf("%d\n", a /= b);   // a = a / b = 10

    return 0;
}