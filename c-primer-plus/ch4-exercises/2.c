#include <stdio.h>
#include <string.h>

int main(void) {
  char first_name[20];

  printf("Enter your first name: ");
  scanf("%s", first_name);

  int width = strlen(first_name) + 3;

  printf("\"%s\"\n", first_name);
  printf("\"%20s\"\n", first_name);
  printf("\"%-20s\"\n", first_name);
  printf("\"%*s\"\n", width, first_name);

  return 0;
}
