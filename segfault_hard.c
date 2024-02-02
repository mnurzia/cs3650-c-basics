#include <stdio.h>
#include <stdlib.h>

int main() {
  char *abc = (char *)malloc(sizeof(char) * 5);
  printf("%c\n", *abc);
  free(abc);
  printf("%s\n", abc); // can't do this... MIGHT segfault, but might not.
  // best to compile your code with -fsanitize=address!
}
