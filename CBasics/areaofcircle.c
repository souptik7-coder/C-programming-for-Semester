#include <stdio.h>

int main() {
    float r, circle;

    printf("Enter your r: ");
    scanf("%f", &r);

    circle = 3.14f * r * r;

    printf("The area of the circle is: %f", circle);

    return 0;
}