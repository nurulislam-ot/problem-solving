#include <stdio.h>

int main() {
  int a = 19;
  int *p = &a;
  // %p = format specifier for printing pointer

  // printf("address: %d value: %d\n", p, *p);
  // printf("current address: %d, next address: %d\n", p, (p + 1));

  int arr[5] = {1, 2, 3, 4, 5};
  int *ap = arr;

  // print 3 no index value it should print 4
  printf("%d\n", *(ap + 3));

  return 0;
}