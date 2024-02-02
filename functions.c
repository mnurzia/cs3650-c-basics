#include <stdio.h>

int fn(int argument,
       char *u) { // function named "fn" accepting int and returning int
  printf("%i %s\n", argument, u);
  return 5;
}

int main() {
  fn(1, "a");
  fn(2, "b");
  return fn(3650, "cdef"); // what will this return?
}
