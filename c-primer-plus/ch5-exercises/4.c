#include <stdio.h>

int main(void) {
  const double IN_PER_CM = 0.3937;
  double h_cm, h_in, h_ft;

  printf("Enter a height in centimeters: ");
  scanf("%lf", &h_cm);

  while (h_cm > 0) {
    h_ft = h_cm * IN_PER_CM / 12;
    printf("%lf\n", h_ft);
    h_in = (h_ft - (int)h_ft) * 12;

    printf("%.1lf cm = %.0lf feet, %.1lf inches.\n", h_cm, h_ft, h_in);

    printf("Enter a height in centimeters (<=0 to quit): ");
    scanf("%lf", &h_cm);
  }

  return 0;
}
