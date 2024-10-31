#include <stdio.h>
#include<string.h>

int main() {
  char username[20] = {'N', 'U', 'R', 'U', 'L', ' ', 'I', 'S', 'L', 'A', 'M'};
  printf("sizeof username = %ld\n", strlen(username));
  printf("Enter your name: ");
  fgets(username, sizeof(username), stdin);
  printf("Welcome, ");
  puts(username);
  return 0;
}