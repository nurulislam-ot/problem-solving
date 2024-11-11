#include <stdio.h>
#include <stdlib.h>

int main() {
  // int arr[5] = {1, 2, 3, 4, 5};
  // int *arr = (int *)malloc(5 * sizeof(int));
  // int *arr = malloc(5 * sizeof(int));
  int *arr = calloc(5, sizeof(int));

  for (int i = 0; i < 5; i++) {
    arr[i] = i + 1;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // resize array
  arr = realloc(arr, 10 * sizeof(int));
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // malloc, realloc, calloc, free

  return 0;
}