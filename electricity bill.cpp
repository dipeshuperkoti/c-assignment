#include <stdio.h>

int main() {
    int units;
    float totalCost;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 20) {
        totalCost = 80 * units;
    } else if (units <= 120) {
        totalCost = 80 * 20 + (units - 20) * 8;
    } else {
        totalCost = 80 * 20 + 100 * 8 + (units - 120) * 10;
    }

    printf("Electricity Bill: Rs %.2f\n", totalCost);

    return 0;
}

