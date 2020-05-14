#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
    //floats have to be used for b and c, because ints do not support fractions or decimals.
  double c = 5.25;
    //a double is a type of float that is "double precision". Presumably, this means you can use the hundredths place in decimals.
  float sum;

  sum = a + b + c;

  printf("The sum of a, b, and c is %f.\n", sum);
    // putting \n makes the text print on a new line.
  return 0;
}