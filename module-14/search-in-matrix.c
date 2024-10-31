#include <stdio.h>

int main() {
  int n, m, x;
  scanf("%d %d", &n, &m);
  int flag = 0;

  int matrix[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  scanf("%d", &x);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == x) {
        flag = 1;
        break;
      }
    }
    if (flag == 1)
      break;
  }

  if (flag == 1)
    printf("will not take number");
  else
    printf("will take number");

  return 0;
}