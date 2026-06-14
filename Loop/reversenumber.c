#include <stdio.h>

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    while (n > 0) {

        int lastdigit = n % 10;
        printf("%d ", lastdigit);

        n = n / 10;
    }

    return 0;
}