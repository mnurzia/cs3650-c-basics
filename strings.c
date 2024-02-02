#include <stdio.h>

int main() {
  char *string = "abcdef";
  printf("s[0]: %02X %c\n", string[0], string[0]);
  printf("s[3]: %02X %c\n", string[3], string[3]);
  printf("s[5]: %02X %c\n", string[5], string[5]);
  printf("s[6]: %02X %c\n", string[6], string[6]);
}
