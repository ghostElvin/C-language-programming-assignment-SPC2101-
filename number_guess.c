/*
Name: Kagwiria Elvin Macharia
Reg no:CT101/G/26559
Description:program that implements number guessing name
*/
#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int secret, guess;

    // use current time as seed for random number
    srand(time(0));

    // generate random number between 1 and 20
    secret = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    // ask for first guess
    printf("Enter your guess: ");
    scanf("%d", &guess);

    // while guess is not equal to secret
    while (guess != secret) {
        if (guess > secret) {
            printf("Too high! Try again: ");
        } else {
            printf("Too low! Try again: ");
        }
        scanf("%d", &guess);  // read next guess
    }

    printf("Congratulations! You guessed it right!\n");

    return 0;
}
