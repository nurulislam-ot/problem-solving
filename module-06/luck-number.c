#include <stdio.h>

int main() {
  short int n;
  scanf("%hd", &n);

  short int first_digit = n / 10;
  short int last_digit = n % 10;

  if (first_digit == 0 || last_digit == 0) {
    printf("YES");
  } else if (first_digit % last_digit == 0 || last_digit % first_digit == 0) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}