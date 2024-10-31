#include <stdio.h>

int main()
{
  // null character =  \0
  char fruit[6] = {'a', 'p', 'p', 'l', 'e', '\0'};
  char orange[6] = "orange";
  printf("%s\n", fruit);
  printf("%s\n", orange);

  char john[10];
  printf("Enter username: ");

  // input string
  // scanf("%[^\n]s", john);
  // fgets(john, sizeof(john), stdin);

  fgets(john, sizeof(john), stdin);

  // print string
  // printf("%s\n", john);
  // fputs(john, stdout);

  fputs(john, stdout);

  return 0;
}