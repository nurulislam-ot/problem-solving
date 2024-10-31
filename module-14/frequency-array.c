#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n];
  int freq_array[100001] = {0};

  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
    freq_array[a[i]] += 1;
  }

  for (int i = 1; i <= m; i++) {
    printf("%d\n", freq_array[i]);
  }

  return 0;
}