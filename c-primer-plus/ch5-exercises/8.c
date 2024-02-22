#include <stdio.h>

int main(void) {
  int r_operand, l_operand, moduli;

  printf("This program computes moduli.\n");
  printf("Enter an integer to serve as the second operand: ");
  scanf("%d", &r_operand);
  printf("Now enter the first operand: ");
  scanf("%d", &l_operand);

  while (l_operand > 0) {
    moduli = l_operand % r_operand;

    printf("%d %% %d is %d\n", l_operand, r_operand, moduli);

    printf("Now enter the first operand (<= 0 to quit): ");
    scanf("%d", &l_operand);
  }

  return 0;
}
