#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  int count = atoi(argv[1]); // convert first argument from string to integer
  int *ints =
      (int *)malloc(sizeof(int) * count); // allocate array of `count` ints
  printf("argc: %i\n", argc);
  for (int i = 0; i < count; i++)
    ints[i] = i; // set the values in the array
  for (int i = 0; i < count; i++)
    printf("ints[%i]=%i\n", i, ints[i]); // read them back
  free(ints);                            // what happens if we don't use free()?
}
