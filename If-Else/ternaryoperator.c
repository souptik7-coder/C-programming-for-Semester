#include <stdio.h>

int main() {
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    char *a = (num % 2 == 0) ? "even" : "odd";

    printf("%s\n", a);

    return 0;
}