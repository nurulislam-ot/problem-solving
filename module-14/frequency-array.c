#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n];
  int freq_array[100000] = {0};

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    freq_array[a[i]] += 1;
  }

  for (int i = 0; i < m; i++) {
    printf("%d\n", freq_array[a[i]]);
  }

  return 0;
}