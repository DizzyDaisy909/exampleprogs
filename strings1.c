#include <stdio.h>

int main(){ 
char * name = "John";
// using * indicates read only.
// means that "name" refers to an array consisting of "John"

if (strncmp(name, "John", 4) == 0) {
    //checks that the char is "name" and the name is "John".
    //the number at the end within the parentheses is how far it will compare
    // in value.
    //the == 0 at the end is checking for if the values in the parentheses equal the 
    //number 0,this is because we did not assign a number to the John array.
    //
    printf("Hello, John!\n");
    //if your name is John, you are let in.
} else {
    printf("You are not John. Fuck off.\n");
    //if your name isn't John, you need to go away.
}

}