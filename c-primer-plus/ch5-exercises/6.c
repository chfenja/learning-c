#include <stdio.h>

int main(void)
{
  int count, sum, days;

  count = 0;
  sum = 0;

  printf("Enter the number of days: ");
  scanf("%d", &days);

  while (count++ < days) {
    sum = count * count;
  }
  printf("sum = %d\n", sum);

  return 0;
}
