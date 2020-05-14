#include <stdio.h>

void guessNumber(int guess) {
    //I am unsure how void works at the moment, but it seems to be for assigning 
    //a word as a pointer for the program to use.
    // Do NOT use guessNumber in the if statements, as it is a pointer, while the
    //numbers are integers. You cannot compare pointers and integers in C.
    if (guess == 555) {
        printf("Correct. You guessed it!\n");
    }
    if (guess < 555) {
        printf("Your guess is too low.\n");
    }
    if (guess > 555) {
        printf("Your guess is too high.\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
    //Sends commands to guess these numbers in the order written, with guessNumber
    //being pointed to the if statements above.
}
    