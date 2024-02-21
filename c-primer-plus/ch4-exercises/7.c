#include <stdio.h>
#include <float.h>

int main(void) {
  float float_num = 1.0f / 3.0f;
  double double_num = 1.0/ 3.0;

  printf("Four digits after the decimal point: %.4f\n", float_num);
  printf("Twelve digits after the decimal point: %.12f\n", float_num);
  printf("Sixteen digits after the decimal point: %.16f\n", float_num);

  printf("Four digits after the decimal point: %.4lf\n", double_num);
  printf("Twelve digits after the decimal point: %.12lf\n", double_num);
  printf("Sixteen digits after the decimal point: %.16lf\n", double_num);

  printf("The value of FLT_DIG: %d\n", FLT_DIG);
  printf("The value of DBL_DIG: %d\n", DBL_DIG);

  return 0;
}
