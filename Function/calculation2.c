#include <stdio.h>

void PrintSum(int a, int b) {
    int c = a + b;
    printf("The Sum is : %d\n", c);
}

void PrintSub(int a, int b) {
    int d = a - b;
    printf("The Sub is : %d\n", d);
}

void PrintMul(int a, int b) {
    int e = a * b;
    printf("The multiplication is : %d\n", e);
}

int main() {
    int a, b;

    printf("Enter your number 1: ");
    scanf("%d", &a);

    printf("Enter your number 2: ");
    scanf("%d", &b);

    PrintSum(a, b);
    PrintSub(a, b);
    PrintMul(a, b);

    return 0;
}