#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }

  for (int row = n - 1; row >= 1; row--) {
    for (int i = 0; i < n - row; i++) {
      printf(" ");
    }
    for (int col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }

  return 0;
}