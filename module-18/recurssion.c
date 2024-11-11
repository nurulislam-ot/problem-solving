#include <stdio.h>

void distribute(int roll, int x) {
  if (x == 0) {
    return;
  }
  printf("Roll %d Received 1 Chocolate\n", roll);
  distribute(roll + 1, x - 1);
}

void print_1_n(int i, int n) {
  if (n < i)
    return;
  printf("%d\n", i);
  print_1_n(i + 1, n);
}

void print_n_1(int n) {
  if (n < 1)
    return;
  printf("%d\n", n);
  print_n_1(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  print_n_1(n);
  return 0;
}