#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("Min int value on this system = %d\n", INT_MIN);
  printf("Max int value on this system = %d\n", INT_MAX);
  printf("Min float value on this system = %f\n", FLT_MIN);
  printf("Max float value on this system = %f\n", FLT_MAX);
  printf("Integer overflow: %d\n", INT_MAX + 1);
  printf("Floating-point overflow = %f\n", FLT_MAX * 2);
  printf("Floating-point underflow = %f\n", FLT_MIN / 2);

  return 0;
}
