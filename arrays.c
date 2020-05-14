#include <stdio.h>

    //start the line with int main(){ and end with } to signify that all of this is a command. "int" can be changed to "float" to allow fractions and decimals.
int main(){
    int numbers[10];
    // numbers[10] gives us 10 numbers to work with, from numbers[0] to numbers[9].  Asking for numbers[10] and beyond will give a random number.

/* populate the array */
    // /* */ is another way to annotate code in C
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    // numbers[7] and on aren't defined in my array, meaning they will give a random number.

/* print the 7th number from the array, which has an index of 6 */
printf("The 5th number in the array is %d\n", numbers[4]);
}
