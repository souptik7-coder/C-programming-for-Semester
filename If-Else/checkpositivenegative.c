#include <stdio.h>

int main() {
    int a;

    printf("Enter your number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("The number is positive\n");
    } else if (a < 0) {
        printf("The number is negative\n");
    } else {
        printf("0 is a neutral integer\n");
    }

    return 0;
}