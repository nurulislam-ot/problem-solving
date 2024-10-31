#include <stdio.h>

int main() {
  int x;
  char y;

  scanf("%d", &x);
  getchar();
  scanf(" %c", &y);

  printf("%d %c\n", x, y);
  return 0;
}