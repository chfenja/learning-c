#include <stdio.h>

int main(void) {
  char first[20], last[20];
  printf("Enter your first and last name: ");
  scanf("%s %s", first, last);
  printf("%s, %s\n", first, last);

  return 0;
}
