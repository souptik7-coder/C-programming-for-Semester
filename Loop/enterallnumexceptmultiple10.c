#include <stdio.h>

int main() {
    int n;

    // Display all numbers entered except multiples of 10

    while (1) {
        printf("Enter your number: ");
        scanf("%d", &n);

        if (n % 10 == 0) {
            continue;
        }

        printf("The number is: %d\n", n);
    }

    return 0;
}