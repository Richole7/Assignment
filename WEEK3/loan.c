//program to calculate if one qualifies for a loan
/*
 Author:Richole Oduor
 Reg No : CT101/G/25060/24
 Date: 30/09/2024
 */
//Preprocessor Directive
#include <stdio.h>
#include <math.h>

int main() {
    int age, income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%d", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
