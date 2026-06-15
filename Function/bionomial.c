// Bionomial Cofficient

#include <stdio.h>

int Factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int Binomial(int n, int r) {
    int nfact = Factorial(n);
    int rfact = Factorial(r);
    int nmrfact = Factorial(n - r);

    int bionomial = nfact / (rfact * nmrfact);

    return bionomial;
}

int main() {
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    printf("Binomial Coefficient = %d\n", Binomial(n, r));

    return 0;
}