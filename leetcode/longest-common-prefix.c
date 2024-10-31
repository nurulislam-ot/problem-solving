#include <limits.h>
#include <stdio.h>
#include <string.h>

int main() {
  // char strs[3][200] = {"dog", "racecar", "car"};
  char strs[4][200] = {"flower", "flow", "flight", "flutter"};

  int arr_index = 0, working_char_index = 0;
  char working_char = strs[0][working_char_index];
  char arr[20];
  int temp = 0;
  int min_str_len = INT_MAX;

  for (int i = 0; i < 4; i++) {
    int len = strlen(strs[i]);
    if (min_str_len > len)
      min_str_len = len;
  }

  for (int i = 0; i < 4; i++) {

    for (int j = 0; j < 4; j++) {

      printf("len=%d, strs[%d][%d]=%c, work=%c\n", min_str_len, j, i, strs[j][i],working_char);
      if (strs[j][i] == working_char) {
        temp++;

        if (4 == temp) {
          arr[arr_index] = strs[j][i];
          arr_index++;
          temp = 0;
          // printf("strs[%d][%d]=%c\n", i, j, strs[j][i]);
        }
      }
    }
    working_char_index++;
    working_char = strs[0][working_char_index];
  }

  for (int i = 0; i < strlen(arr); i++) {
    printf("%c", arr[i]);
  }
  printf("\n");

  return 0;
}