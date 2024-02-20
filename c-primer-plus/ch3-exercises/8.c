#include <stdio.h>

int main(void) {
  float pints, cups, ounces, tablespoons, teaspoons;

  printf("Enter the volume in cups: ");
  scanf("%f", &cups);

  pints = cups / 2;
  ounces = cups * 8;
  tablespoons = ounces * 2;
  teaspoons = tablespoons * 3;


  printf("Volume in pints %.2f\n", pints);
  printf("Volume in ounces %.2f\n", ounces);
  printf("Volume in tablespoons %.2f\n", tablespoons);
  printf("Volume in teaspoons %.2f\n", teaspoons);


  return 0;
}
