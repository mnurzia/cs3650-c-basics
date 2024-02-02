#include <stdio.h>

int main() {
  char arr[] = "abcdef";
  char *p = arr;      // pointers can point to arrays
  int *pi = (int *)p; // we can have different types of pointers
  // ... but different types of pointers behave differently!
  printf("%p %p %p %p %p\n", arr, p, p + 1, pi, p + 1 * sizeof(int));
  printf("%c %c\n",
         *p,      // dereference operator in action
         arr[0]); // dereferencing pointers is like indexing arrays
  // we can make pointers by taking the address of variables
  char c = 'A';
  p = &c; // address-of operator in action
  printf("%c %p %c\n", c, p, *p);
}
