//program to calculate simple interest
/*
 Author:Richole Oduor
 Reg No : CT101/G/25060/24
 Date: 27/09/2024
 */
//Preprocessor Directive
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    // Input principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate compound interest
    compound_interest = principal * pow(1 + (rate / 100), time) - principal;

    // Print the result
    printf("\nCompound Interest: %.2f\n", compound_interest);

    return 0;
}
