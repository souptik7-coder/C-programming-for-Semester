#include <stdio.h>

int main() {
    int n;

    // Keep entering numbers till user enters a multiple of 10

    printf("Enter your number: ");
    scanf("%d", &n);

    while (1) {
        printf("Enter your number: ");
        scanf("%d", &n);

        if (n % 10 == 0) {
            break;
        }
    }

    printf("I am out of the loop\n");

    return 0;
}