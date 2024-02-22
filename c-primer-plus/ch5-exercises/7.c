#include <stdio.h>

void cube(double num);

int main(void) {
  double num;

  printf("Enter a number of type double: ");
  scanf("%lf", &num);

  cube(num);

  return 0;
}

void cube(double num) {
  printf("%lf\n", num * num * num);
}
