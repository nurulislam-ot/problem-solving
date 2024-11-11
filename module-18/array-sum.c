#include <stdio.h>

int arr_sum(int sum, int arr[5], int index, int arr_size) {
  if (index == arr_size)
    return sum;
  return arr_sum(sum + arr[index], arr, index + 1, arr_size);
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  int sum = arr_sum(0, arr, 0, 5);
  printf("%d\n", sum);

  return 0;
}