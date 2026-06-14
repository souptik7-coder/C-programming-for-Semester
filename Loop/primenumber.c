#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int isprime = 1;  

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isprime = 0;
    }

    if (n == 2) {
        printf("The number is prime\n");
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isprime = 0;
        }
    }

    if (isprime == 1) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}