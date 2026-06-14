#include <stdio.h>

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    int reverse = 0;

    while (n > 0) {

        int lastdigit = n % 10;
        reverse = (reverse * 10) + lastdigit;
        n = n / 10;
    }

    printf("Reverse number = %d\n", reverse);

    return 0;
}