//program to calculate 
/*
 Author:Richole Oduor
 Reg No : CT101/G/25060/24
 Date: 30/09/2024
 */
//Preprocessor Directive
#include <stdio.h>

int main() {
    int Book_ID;
    int Due_Date;
    int Return_Date;
    int Days_Overdue;
    int FineRate;
    int FineAmount;

    // Input from the user
    printf("Enter Book ID: ");
    scanf("%d", &Book_ID);

    printf("Enter Due Date (day): ");
    scanf("%d", &Due_Date);

    printf("Enter Return Date (day): ");
    scanf("%d", &Return_Date);

    // Calculate days overdue
    Days_Overdue = Return_Date - Due_Date;

    // Determine fine rate and calculate fine amount
    if (Days_Overdue <= 7) {
        FineRate = 20;
    } else if (Days_Overdue <= 14) {
        FineRate = 50;
    } else {
        FineRate = 100;
    }

    FineAmount = Days_Overdue * FineRate;

    // Display results
    printf("\nBook ID: %d\n", Book_ID);
    printf("Due Date: %d\n", Due_Date);
    printf("Return Date: %d\n", Return_Date);
    printf("Days Overdue: %d\n", Days_Overdue);
    printf("Fine Rate: Ksh. %d\n", FineRate);
    printf("Fine Amount: Ksh. %d\n", FineAmount);

    return 0;
}




