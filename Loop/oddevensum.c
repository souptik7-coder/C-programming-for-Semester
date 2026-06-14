#include <stdio.h>

int main() {
    
    // Sum of Odd and Even Numbers

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    int oddsum = 0;
    int evensum = 0;

    for (int i = 0; i <= n; i++) {

        if (i % 2 == 0) {
            evensum = evensum + i;
        } else {
            oddsum = oddsum + i;
        }
    }

    printf("The odd sum is: %d\n", oddsum);
    printf("The even sum is: %d\n", evensum);

    return 0;
}