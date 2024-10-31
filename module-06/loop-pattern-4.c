#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int row = 0; row < n; row++) {
    for (int col = 1; col <= n + (n - 1); col++) {
      // middle column
      if (col == n) {
        printf(" *");
      }
      // corner column
      else if (col == n - row || col == n + row) {
        printf(" *");
      }
      // middle-corner column
      else if (n - row < col && n + row > col ) {
        printf(" *");

      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}