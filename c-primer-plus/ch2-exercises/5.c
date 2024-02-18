#include <stdio.h>

void br(void);
void ic(void);

int main(void) {
  br();
  printf("%s", ", ");
  ic();
  printf("%s", "\n");
  ic();
  printf("%s", ",\n");
  br();
  printf("%s", "\n");

  return 0;
}


void br(void) {
  printf("%s", "Brazil, Russia");
}


void ic(void) {
  printf("%s", "India, China");
}
