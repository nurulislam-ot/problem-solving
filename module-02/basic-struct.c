#include <stdio.h>

int main() {
  typedef struct User {
    char name[60];
    char email[60];
    int age;
  } user;

  user laam = {.age = 23, .name = "JOHN DOE", .email = "john.doe@google.com"};

  printf("Enter your name: ");
  fgets(laam.name, sizeof(laam.name), stdin);

  printf("Enter your age: ");
  scanf("%d", &laam.age);
  getchar();

  printf("Enter your email: ");
  fgets(laam.email, sizeof(laam.email), stdin);

  printf("\n\nName: %s", laam.name);
  printf("Age: %d\n", laam.age);
  printf("Email: %s\n", laam.email);

  return 0;
}