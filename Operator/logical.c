#include <stdio.h>

int main() {
    
    int a = 5;
    int b = 10;

    printf("%d\n", (a > b) && (a < b));  // false 
    printf("%d\n", (a > b) || (a < b));  // true 
    printf("%d\n", a != b);              // true 


    return 0;
}