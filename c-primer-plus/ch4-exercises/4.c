#include <stdio.h>

int main(void) {
  char name[20];
  float height_cm, height_m;

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your height in cm: ");
  scanf("%f", &height_cm);

  height_m = height_cm / 100;

  printf("%s, your are %.2f meters tall\n", name, height_m);

  return 0;
}
