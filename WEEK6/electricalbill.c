//program to calculate total amount to pay
/*
Author:Richole Oduor
Reg No:CT101/G/25060/24
Date: 9/10/2024
*/
//Preprocessor Directive
#include <stdio.h>
int main() {
    int customerID, unitsConsumed;
    char customerName[100];
    double chargesPerUnit, totalBill, surcharge, amountToPay;

    // Prompt user to enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges per unit based on units consumed
    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }
    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Calculate surcharge if applicable
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }
    // Ensure minimum bill is Kshs. 100/-
    if (totalBill < 100) {
        totalBill = 100;
    }
    // Calculate total amount to pay
    amountToPay = totalBill;

    // Display output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Kshs %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Kshs %.2f\n", amountToPay);

    return 0;
}
