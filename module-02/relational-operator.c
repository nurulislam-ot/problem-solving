#include <stdio.h>
#include<stdbool.h>

int main() {
  int age;
  printf("Enter Your Age: ");
  scanf("%d", &age);
  bool isAdult = age >= 18;

  printf("value of adult = %d\n", isAdult);
  return 0;
}