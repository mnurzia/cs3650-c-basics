#include <stdio.h>

int main() {
  int i;
  for (i = 0; i < 5; i++) { // for loop
    printf("i: %i\n", i);
  }
  while (i > 0) { // while loop
    printf("i: %i\n", i);
    i = i - 1;
  }
  if (i > 0) { // if/else (use else if to chain)
    printf("never runs\n");
  } else {
    printf("ok\n");
  }
}
