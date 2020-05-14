#include <stdio.h>
    //always include this line, unless you have your own custom libraries to be using.

int main(){
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    // follows order of operations (PEMDAS). (b-c)+(d*e)
    printf ("%d\n", a);
}
