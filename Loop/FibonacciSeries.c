#include <stdio.h>

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 0; i <= n; i++) {
        int next = a + b;
        printf("%d\n", next);

        a = b;
        b = next;
    }

    return 0;
}