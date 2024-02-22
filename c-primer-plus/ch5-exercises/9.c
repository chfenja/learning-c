#include <stdio.h>

void Temperatures(double fahrenheit);

int main(void) {
  int r_value;
  double fahrenheit;

  printf("Enter temperature in Fahrenheit: ");

  r_value = scanf("%lf", &fahrenheit);

  while (r_value == 1) {
    Temperatures(fahrenheit);
    printf("Enter temperature in Fahrenheit (use q to quit): ");
    r_value = scanf("%lf", &fahrenheit);
  }

  return 0;
}


void Temperatures(double fahrenheit) {
  const double CELSIUS = 5.0 / 9.0 * (fahrenheit - 32.0);
  const double KELVIN = CELSIUS + 273.16;
  printf("%.2lf Fahrenheit is %.2lf Celsius and %.2lf Kelvin\n",
         fahrenheit, CELSIUS, KELVIN);
}
