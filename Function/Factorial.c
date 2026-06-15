#include <stdio.h>

int Factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n = 5;

   

    printf("Factorial = %d\n", Factorial(n));

    return 0;
}