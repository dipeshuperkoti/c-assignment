#include <stdio.h>

int main() {
    int n, factorial = 1;
    
    printf("Enter a non-negative integer (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %d\n", n, factorial);
    }

    return 0;
}

