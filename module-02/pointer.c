#include <stdio.h>

int sum(int *a, int *b) { return *a + *b; }

int main() {
  int var;
  int *p_var = &var;
  *p_var = 10;

  int var_a = 10;
  int var_b = 20;

  int *p_var_a = &var_a;
  int *p_var_b = &var_b;

  printf("%d\n", sum(p_var_a, p_var_b));

  printf("%d in %p address\n", *p_var, p_var);
  return 0;
}