#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr1[n];
  int arr2[n];
  int is_palindrome = 1;

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr1[i]);
  }

  for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--) {
    arr2[j] = arr1[i];
  }

  for (int i = 0; i < n; i++) {
    printf("%d == %d, %d\n", arr2[i], arr1[i], i);
    if (arr2[i] != arr1[i]) {
      is_palindrome = 0;
      printf("NO\n");
      break;
    }
  }

  if (is_palindrome)
    printf("YES\n");

  return 0;
}