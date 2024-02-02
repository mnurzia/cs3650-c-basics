#include <stdio.h>

struct my_struct {
  int i_field;
  char *s_field;
};

struct my_struct make_struct() {
  struct my_struct s;
  s.i_field = 1;
  s.s_field = "abc";
  return s;
}

int main() {
  struct my_struct a_struct = make_struct();
  printf("%i %s %lu\n", a_struct.i_field, a_struct.s_field,
         sizeof(struct my_struct));
}
