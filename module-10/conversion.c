#include <stdio.h>
#include <string.h>

int main() {
  char str[100000];
  fgets(str, sizeof(str), stdin);
  int length = strlen(str);


  for (int i = 0; i < length; i++) {
    char current_char = str[i];

    if (current_char == ',') {
      printf(" ");
    } else if (current_char >= 'A' && current_char < 'Z') {
      printf("%c", current_char + 32);
    } else if (current_char >= 'a' && current_char < 'z') {
      printf("%c", current_char - 32);
    } else {
      printf("%c", current_char);
    }
  }

  return 0;
}