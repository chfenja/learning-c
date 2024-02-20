#include <stdio.h>

int main(void) {
  double quart, g_in_quart, mass_water_molecule, quart_in_g, num_water_molecule;

  mass_water_molecule = 3.0e-23;
  quart_in_g = 950;

  printf("Amount of water in quarts: ");
  scanf("%lf", &quart);

  g_in_quart = quart * quart_in_g;

  num_water_molecule = g_in_quart / mass_water_molecule;

  printf("Grams in a given amount of quart: %.2lf\n", g_in_quart);
  printf("Number of water molecules in a given amount of quart: %e\n",
         num_water_molecule);

  return 0;
}
