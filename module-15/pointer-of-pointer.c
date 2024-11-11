#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 5;
  int *p = &a;

  int **y = &p;

  // printf("address of a: %d, address of p: %d, address of y: %d, value of
  // a\n",
  //        *y);

  float price = 10.85;
  float *prc = &price;

  printf("value: %.2f, address: %lu\n", price, prc);
  return 0;
}