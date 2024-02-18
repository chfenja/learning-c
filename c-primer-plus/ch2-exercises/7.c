#include <stdio.h>

void smile(void);

int main(void) {
  smile();
  smile();
  smile();
  printf("%s", "\n");
  smile();
  smile();
  printf("%s", "\n");
  smile();
  printf("%s", "\n");

  return 0;
}


void smile(void) {
  printf("Smile!");
}
