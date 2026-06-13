#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter your number: ");
    scanf("%d", &a);

    printf("Enter your number: ");
    scanf("%d", &b);

    c = a + b;

    printf("The sum is: %d", c);

    return 0;
}