#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int row = 0; row < n; row++) {
    for (int col = n - row; col > 0; col--) {
      printf("%d ", col);
    }
    printf("\n");
  }

  return 0;
}