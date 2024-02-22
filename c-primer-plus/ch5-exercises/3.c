#include <stdio.h>

int main(void) {
  int total_d, weeks, days;
  const int DAYS_IN_WEEK = 7;
  printf("Enter the number of days: ");
  scanf("%d", &total_d);

  while (total_d > 0) {

    weeks = total_d / DAYS_IN_WEEK;
    days = total_d % DAYS_IN_WEEK;

    printf("%d days are %d weeks, %d days.\n", total_d, weeks, days);

    printf("Enter the number of days: ");
    scanf("%d", &total_d);
  }

  return 0;
}
