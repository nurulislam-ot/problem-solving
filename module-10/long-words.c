#include <stdio.h>

int main() {
  int total_words;
  scanf("%d", &total_words);

  for (int i = 0; i < total_words; i++) {
    char str[100];
    int length = 0;
    scanf("%s", str);
    for (length; str[length] != '\0'; length++) {
    }

    if (length > 10) {
      printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
    } else {
      printf("%s\n", str);
    }
  }

  return 0;
}