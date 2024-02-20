#include <stdio.h>

int main(void) {
  int ascii_code;
  char ascii_char;
  printf("Enter an ASCII code value: ");
  scanf("%d", &ascii_code);

  ascii_char = ascii_code;

  printf("the ascii character for this code is: %c\n", ascii_char);

  return 0;
}
