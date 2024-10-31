#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int freq_arr[100000] = {0};
  int total_unique_number = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    freq_arr[arr[i]] = 1;
  }

  for (int i = 0; i < 100000; i++) {
    total_unique_number += freq_arr[i];
  }

  printf("%d\n", total_unique_number);

  return 0;
}