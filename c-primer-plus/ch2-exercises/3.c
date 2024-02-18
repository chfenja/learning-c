#include <stdio.h>

int main(void) {
  int age_years, age_days;

  printf("%s", "You age in years: ");
  scanf("%d", &age_years);

  age_days = age_years * 365;

  printf("%d years are %d days.\n", age_years, age_days);

  return 0;
}
