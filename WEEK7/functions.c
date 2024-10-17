#include <stdio.h>

// Function to calculate the bill
float calculateBill(int units) {
    float charge;

    if (units <= 199) {
        charge = 1.20 * units;
    } else if (units >= 200 && units < 400) {
        charge = 1.50 * units;
    } else if (units >= 400 && units < 600) {
        charge = 1.80 * units;
    } else {
        charge = 2.00 * units;
    }

    // Surcharge of 15% if total bill exceeds Kshs. 400
    if (charge > 400) {
        charge += charge * 0.15;
    }

    // Minimum bill should be Kshs. 100
    if (charge < 100) {
        charge = 100;
    }

    return charge;
}

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalAmount;

    // Prompt the user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate the bill
    totalAmount = calculateBill(unitsConsumed);

    // Display the output
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", totalAmount / unitsConsumed);
    printf("Total Amount to Pay: %.2f\n", totalAmount);

    return 0;
}

