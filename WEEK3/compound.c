//program to calculate compound interest
/*
 Author:Richole Oduor
 Reg No : CT101/G/25060/24
 Date: 27/09/2024
 */
//Preprocessor Directive
#include <stdio.h>
#include <math.h>
int main () {
    float principle,time,rate,compound interest,amount;
    int n;
    //Input principle,rate,time and compounding frequency
    printf("Enter the principle amount:");
    scanf("%f",&principle);

    printf("Enter the rate of interest(as percentege):");
    scanf("%f",&rate);
    rate=rate/100;//Convert to decimal 

    printf("Enter the time(in years):");
    scanf("%f",&time);

    printf("Enter the number of times interest is compounded per year:");
    scanf("%d",&n);
    //Calculate compound interest amount = principle *pow((1+rate/n),n*time);
    compound interest = amount - principle;

    //Output the results
    printf ("CompoundInterest = %2f\n",compoundinterest);
    printf("Final Amount = %2f\n",amount);

    return 0;
}
