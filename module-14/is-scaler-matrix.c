#include <stdio.h>
/**
 * Type of matrix
 * 1. Square Matrix
 * 2. Diagonal Matrix
 * 2. Scaler Matrix
 *
 * What is matrix?
 * Ans: Matrix look like grid. Where row and column exist. And each cell have
 * some value;
 */

int main() {
  int n;
  scanf("%d", &n);
  int matrix[n][n];
  int flag = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int element = matrix[0][0];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        if (matrix[i][j] != element) {
          flag = 0;
          break;
        }
      } else if (matrix[i][j] != 0) {
        flag = 0;
        break;
      }
    }

    if (flag == 0) {
      break;
    }
  }

  if (flag == 1)
    printf("scaler matrix\n");
  else
    printf("not a scaler matrix\n");

  return 0;
}