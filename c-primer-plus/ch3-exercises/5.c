#include <stdio.h>

int main(void) {
  int age_years;
  double age_seconds;

  printf("Your age in years: ");
  scanf("%d", &age_years);

  age_seconds = 3.156e7 * age_years;

  printf("Your age in seconds is: %.2f\n", age_seconds);

  return 0;
}
