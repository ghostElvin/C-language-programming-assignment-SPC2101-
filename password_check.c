/*
Name:Kagwiria Elvin Macharia
Reg no: CT101/G/26559
Description:This program keeps asking the user to enter a password until they type the correct one (1234).
It uses a do-while loop to make sure the prompt runs at least once.
*/

#include <stdio.h>   // For printf() and scanf()
#include <string.h>  // For comparing strings using strcmp()

int main() {
    char password[20];  // variable to store the entered password

    printf("\n\t--- LOGIN ACCESS PORTAL ---\n");

    // keep prompting user until they enter the correct password
    do {
        printf("Please enter your password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password! Try again.\n\n");
        }

    } while (strcmp(password, "1234") != 0);

    printf("\nAccess Granted. Welcome!\n");

    return 0;
}
