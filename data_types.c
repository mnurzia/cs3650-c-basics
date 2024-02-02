#include <stdio.h>

int main() {
  int v = 1; // declare a variable by giving it a data type, a name, and
             // optionally a value
  int v2;    // variables without a value are *uninitialized* (contain garbage)
  printf("v: %i, v2: %i\n", v, v2);
  printf("char: %lu\n", sizeof(char));   // always 1
  printf("short: %lu\n", sizeof(short)); // from here down: varies by machine!
  printf("unsigned short: %lu\n", sizeof(unsigned short));
  printf("int: %lu\n", sizeof(int));
  printf("unsigned int: %lu\n", sizeof(unsigned int));
  printf("long: %lu\n", sizeof(long));
  printf("unsigned long: %lu\n", sizeof(unsigned long));
  printf("size_t: %lu\n", sizeof(size_t));
  printf("float: %lu\n", sizeof(float));
  printf("double: %lu\n", sizeof(double));
}
