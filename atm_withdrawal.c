/*
Name:Kagwiria Elvin Macharia
Reg no: CT101/G/26559
DESCRIPTION:Program to prompt user to enter amount to withdraw until balance becomes zero
*/

#include <stdio.h>

int main() {
    float balance = 1000, withdraw;

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("New balance: %.2f\n", balance);
    }

    printf("Out of money!\n");
    return 0;
}
