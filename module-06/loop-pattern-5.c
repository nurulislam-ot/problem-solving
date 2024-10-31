#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      if (row == 0 || row == n - 1) {
        printf("* ", row);
      } else if (col == 0 || col == n - 1) {
        printf("* ", row);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}