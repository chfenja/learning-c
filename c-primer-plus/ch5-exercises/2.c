#include <stdio.h>

int main(void) {
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  int stop = num + 10;

  while (num <= stop) {
    printf("%5d", num++);
  }
  printf("\n");

  return 0;
}
