#include <stdio.h>

int main() {
    
    float p, t, r;

    printf("Enter the principal amount (p): ");
    scanf("%f", &p);

    printf("Enter the time in years (t): ");
    scanf("%f", &t);

    printf("Enter the rate of interest (r): ");
    scanf("%f", &r);

    
    float simple_interest = (p * t * r) / 100;

  
    printf("Simple Interest: %f\n", simple_interest);

    return 0;
}

