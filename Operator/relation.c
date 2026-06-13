#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("%d\n", a > b);   // false 0
    printf("%d\n", a == b);  // false 0
    printf("%d\n", a < b);   // true  1
    printf("%d\n", a >= b);  // false 0
    printf("%d\n", a <= b);  // true  1
    printf("%d\n", a != b);  // true  1

    return 0;
}