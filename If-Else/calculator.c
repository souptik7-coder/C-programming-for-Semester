#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter the first operand: ");
    scanf("%d", &a);

    printf("Enter the second operand: ");
    scanf("%d", &b);

    printf("Enter the operator: ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("The sum is: %d\n", a + b);
            break;

        case '-':
            printf("The subtraction is: %d\n", a - b);
            break;

        case '*':
            printf("The multiplication is: %d\n", a * b);
            break;

        case '/':
            printf("The division is: %d\n", a / b);
            break;

        case '%':
            printf("The modulo is: %d\n", a % b);
            break;

        default:
            printf("Error\n");
    }

    return 0;
}