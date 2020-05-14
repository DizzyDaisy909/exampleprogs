#include <stdio.h>

int main(){
char * name = "Daisy";
int age = 16;

//prints the name and age listed in the code above.
printf("%s is %d years old.\n",name,age);
// seems to mean that %s is for chars, and %d is for ints.

printf("Their willy is %d inches long.\n",strlen(name));
// strlen provides how long a string is as a number. For example, "John Smith" is
//10 characters long, making the resulting strlen output 10. I used
//this to measure dick size based on name length.
}
