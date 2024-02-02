#include <stdio.h>

int main() {
  int i = 0xA;
  unsigned int u = 2;
  char c = 'A';
  char *s = "ABC";
  size_t lu = sizeof(long double);
  float f = 0.2f;
  double lf = 1000.0;
  // the % signs are called "format specifiers", here are the most common ones:
  printf("%i %u %c %s %lu %f %lf %X\n", i, u, c, s, lu, f, lf, i);
  // make sure the number of format specifiers == the number of other arguments
}
