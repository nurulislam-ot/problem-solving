#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr = calloc(5, 4);
  arr = realloc(arr, 40);

  for (int i = 0; i < 10; i++) {
    arr[i] = 0;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  free(arr);

  printf("\n");

  return 0;
}