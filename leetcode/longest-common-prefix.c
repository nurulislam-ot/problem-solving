#include <limits.h>
#include <stdio.h>
#include <string.h>
#define total_str 3

int main() {
  char strs[total_str][200] = {"dog", "dolphin", "doctor"};
  // char strs[total_str][200] = {"flower", "flow", "flight", "flutter"};

  int arr_index = 0, working_char_index = 0;
  char working_char = strs[0][working_char_index];
  char prefix_str[20];
  int temp = 0;
  int min_str_len = INT_MAX;

  for (int i = 0; i < total_str; i++) {
    int len = strlen(strs[i]);
    if (min_str_len > len)
      min_str_len = len;
  }

  for (int i = 0; i < total_str; i++) {
    for (int j = 0; j < min_str_len; j++) {

      if (strs[j][i] == working_char) {
        temp++;

        if (total_str == temp) {
          prefix_str[arr_index] = strs[j][i];
          arr_index++;
          temp = 0;
        }
      }
    }
    working_char_index++;
    working_char = strs[0][working_char_index];
    temp = 0;
  }

  for (int i = 0; i < strlen(prefix_str); i++) {
    printf("%c", prefix_str[i]);
  }
  printf("\n");

  return 0;
}