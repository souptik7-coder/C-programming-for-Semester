#include <stdio.h>

int main() {
    int a, b, c;
    int x, y;

    printf("Enter your number a: ");
    scanf("%d", &a);

    printf("Enter your number b: ");
    scanf("%d", &b);

    /* Swapping using third variable */


    c = a;
    a = b;
    b = c;

    printf(" After swapping a = %d\n", a);
    printf(" After swapping b = %d\n", b);

    /* Swapping without third variable */


    printf("Enter your number x: ");
    scanf("%d", &x);

    printf("Enter your number y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf(" After swapping x = %d\n", x);
    printf(" After swapping y = %d\n", y);

    return 0;
}