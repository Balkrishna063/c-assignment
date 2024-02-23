#include <stdio.h>

int main() {
    int a, fact = 1;

    
    printf("Enter a number: ");
    scanf("%d", &a);

    
    if (a < 0) {
        printf("Factorial cannot be calculated.\n");
    } else {
        for (int i = 1; i <= a; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", a, fact);
    }

    return 0;
}