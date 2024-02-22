#include <stdio.h>

int main(void) {
  const int M_PER_H = 60;
  int total, minutes, hours;

  printf("Enter time in minutes: ");
  scanf("%d", &total);

  while (total > 0) {
    hours = total / M_PER_H;
    minutes = total % M_PER_H;

    printf("That's %dh%dmin\n", hours, minutes);

    printf("Enter time in minutes: ");
    scanf("%d", &total);
  }

  return 0;
}
