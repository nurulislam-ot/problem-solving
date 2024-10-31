#include <stdio.h>

int main() {
  int mark;
  scanf("%d", &mark);

  switch (mark) {
  case 80:
    printf("You got A+");
    break;
  case 75:
    printf("You got A");
    break;
  case 70:
    printf("You got A-");
    break;
  default:
    printf("You got F");
    break;
  }
  return 0;
}