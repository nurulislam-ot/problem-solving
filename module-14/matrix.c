#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  int matrix[n][n];
  int primary_diagonal_sum = 0;
  int secondary_diagonal_sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // primary diagonal
      if (i == j) {
        primary_diagonal_sum += matrix[i][j];
      }
      // secondary diagonal
      if (i + j == n - 1) {
        secondary_diagonal_sum += matrix[i][j];
      }
    }
  }

  printf("%d\n", abs(primary_diagonal_sum - secondary_diagonal_sum));

  return 0;
}