#include <stdio.h>
#include <string.h>
extern char x;
    //declares that x exists. use if you have more than one int main() or .c file.

int main() {
    
    char x;
        //defines what x is.
    char vowels[2][5] = {
            // format is [x][y]. [2][5] makes 2 rows with 5 columns.
        {'a', 'e', 'i', 'o', 'u'},
        {'A', 'E', 'I', 'O', 'U'}
    };
     x = vowels[1][2];
    //remember to subtract one number from the row and column boxes, as indexing starts at 0.
        //defines what x *means*, which is different. This defines x as [2,3], or I.
    printf ("%c\n", x);
}
