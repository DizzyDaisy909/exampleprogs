# include <stdio.h>
#include <string.h>
//String concatenation requires the string.h library.

int main(){

  char * first_name = "John";
  char last_name[] = "Doe";
    
  char name[100];
  last_name[0] = "G";
  sprintf(name, "%s %s\n", first_name, last_name);
  if (strncmp(name, "John Goe", 100) == 0) {
      printf("Done!\n");
  }
  name[0]='\0';
  strncat(name,first_name,4);
  strncat(name,last_name,20);
  printf("%s\n",name);
  return 0;

}