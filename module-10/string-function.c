#include <stdio.h>
#include <string.h>

int main()
{
  char a[15] = "Hello";
  char b[15] = "World";

  strcpy(b, a);
  // strcat(a, b);
  // strcmp(a, b); // lexical compare
  // strrev(a) // most of compilers are not working with that

  // string concat
  // for (int i = strlen(a), j = 0; i < strlen(a) + strlen(b), j < strlen(b); i++, j++)
  // {
  //   a[i] = b[j];
  // }

  // string reverse
  // for (int i = 0, j = strlen(a) - 1; i <= j; i++, j--)
  // {
  //   char temp = a[i];
  //   a[i] = a[j];
  //   a[j] = temp;
  // }

  printf("%s %s\n", b, a);

  // printf("%ld", sizeof(int));

  return 0;
}