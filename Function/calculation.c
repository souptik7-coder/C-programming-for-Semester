
// syntax with parameters int function

#include <stdio.h>

int PrintSum(int a, int b) {
    int c = a + b;
    return c;
}

int PrintSub(int a, int b) {
    int d = a - b;
    return d;
}

int PrintMul(int a, int b) {
    int e = a * b;
    return e;
}

int main() {
    int a, b;

    printf("Enter your number 1: ");
    scanf("%d", &a);

    printf("Enter your number 2: ");
    scanf("%d", &b);

    printf("%d\n", PrintSum(4, 5));
    printf("%d\n", PrintSub(5, 6));
    printf("%d\n", PrintMul(8, 7));

    return 0;
}