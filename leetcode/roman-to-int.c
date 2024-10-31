#include <stdio.h>
#include <string.h>

int main() {
  char s[15];
  scanf("%s", s);
  int val = 0, len = strlen(s);

  for (int i = 0; i < len; i++) {
    if (s[i] == 'I') {
      val += 1;
    } else if (s[i] == 'V') {
      if (i > 0 && s[i - 1] == 'I') {
        val += 3;
      } else {
        val += 5;
      }
    } else if (s[i] == 'X') {
      if (i > 0 && s[i - 1] == 'I') {
        val += 8;
      } else {
        val += 10;
      }
    } else if (s[i] == 'L') {
      if (i > 0 && s[i - 1] == 'X') {
        val += 30;
      } else {
        val += 50;
      }
    } else if (s[i] == 'C') {
      if (i > 0 && s[i - 1] == 'X') {
        val += 80;
      } else {
        val += 100;
      }
    } else if (s[i] == 'D') {
      if (i > 0 && s[i - 1] == 'C') {
        val += 300;
      } else {
        val += 500;
      }
    } else if (s[i] == 'M') {
      if (i > 0 && s[i - 1] == 'C') {
        val += 800;
      } else {
        val += 1000;
      }
    }
  }

  printf("%d\n", val);

  return 0;
}