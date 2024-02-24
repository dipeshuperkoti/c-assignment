#include <stdio.h>

int main() {
    int n, num, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        ans += num;
    }

    printf("Sum of the entered numbers is: %d\n", ans);

    return 0;
}

