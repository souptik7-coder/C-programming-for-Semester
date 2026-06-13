#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("%d\n", a + b);
    printf("%d\n", b - a);
    printf("%d\n", a * b);
    printf("%d\n", b / a);
    printf("%d\n", b % a);

    printf("%d\n", a++);  // first print a = 5, then increase a = 6
    printf("%d\n", a--);  // first print a = 6, then decrease a = 5

    printf("%d\n", --b);  // first decrease b = 9, then print
    printf("%d\n", b--);  // first print b = 9, then decrease b = 8

    printf("%d\n", b);

    return 0;
}