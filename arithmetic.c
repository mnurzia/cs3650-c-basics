#include <stdio.h>

int main() {
  int a = 5, b = 10, c = 0;
  printf("a+b=%i\n", a + b);                   // add
  printf("a-b=%i\n", a - b);                   // sub
  printf("a*b=%i\n", a * b);                   // mul
  printf("b/a=%i\n", b / a);                   // div
  printf("a&b=%i\n", a & b);                   // and
  printf("a|b=%i\n", a | b);                   // or
  printf("a^b=%i\n", a ^ b);                   // xor
  printf("a&&c=%i\n", a && c);                 // logical and
  printf("a||c=%i\n", a || c);                 // logical or
  printf("~a=%i %08X %08X\n", ~a, a, ~a);      // unary not
  printf("a<<b=%i\n", a << b);                 // shift left
  printf("b>>1=%i\n", b >> 1);                 // shift right
  printf("++c=%i\n", ++c);                     // preincrement
  printf("c++=%i\n", c++);                     // postincrement
  printf("--c=%i\n", --c);                     // predecrement
  printf("c--=%i\n", c--);                     // postdecrement
  printf("a==b ? b : c=%i\n", a == b ? b : c); // ternary conditional
}
