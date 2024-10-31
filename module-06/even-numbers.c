#include <stdio.h>

int main() {
  int n, isNoEvenNumber = 1;
  scanf("%d", &n);


  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      isNoEvenNumber = 0;
      printf("%d\n", i);
    }
  }

  if(isNoEvenNumber)
    printf("-1");

  return 0;
}