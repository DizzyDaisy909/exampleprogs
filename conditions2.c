#include <stdio.h>

int foo = 13;
int bar = 20;
int moo = 18;

int main() {

if (foo < bar && moo > bar) {
//&& is the AND function. it tells if all things are true in an if statement.
    printf("foo is smaller than bar AND moo is larger than bar.\n");
}
else printf("whoops!\n");
if (foo < bar || moo > bar) {
//|| is the OR function. it tells if one or another thing is true in an if statement.
    printf("foo is smaller than bar OR moo is larger than bar.\n");
}
else printf("nope.\n");
}
