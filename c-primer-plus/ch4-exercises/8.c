#include <stdio.h>

int main(void) {
  float miles_traveled, num_gallons, miles_per_gallon, liters_per_100_km;
  const float GALLON_TO_L = 3.785, MILE_TO_KM = 1.609;

  printf("Enter the number of miles traveled: ");
  scanf("%f", &miles_traveled);
  printf("Enter the number of gallons of gasoline consumed: ");
  scanf("%f", &num_gallons);

  miles_per_gallon = miles_traveled / num_gallons;

  printf("Your miles per gallon is: %.1f.\n", miles_per_gallon);

  liters_per_100_km = (100 / MILE_TO_KM) * (GALLON_TO_L / miles_per_gallon);

  printf("You liters per 100 km is: %.1f.\n", liters_per_100_km);

  return 0;
}
