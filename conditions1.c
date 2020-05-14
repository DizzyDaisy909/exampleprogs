#include <stdio.h>

int peanuts_eaten = 50;
int peanuts_in_jar = 80;
int max_peanut_limit = 50;
int main(){
    //remember to type int main(){ } when copying examples from learn-c.org
if (peanuts_in_jar > 80) {
    if (peanuts_eaten < max_peanut_limit) {
        printf("Take as many peanuts as you want!\n");
        //means that if there are more than 80 peanuts in the jar, it will measure 
        //if the amount of peanuts eaten is less than the maximum peanut limit.
        //if there are less than 80 peanuts, it will skip this code and go to the 
        //"else" statement in the next bracket.
    }
} else {
    if (peanuts_eaten > peanuts_in_jar) {
        printf("You can't have anymore peanuts!\n");
    }
    else {
        printf("Alright, just one more peanut.\n");
        //pretty self-explanatory if you read the previous notes.
    }
}
}
