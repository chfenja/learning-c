#include <stdio.h>

void one_three(void);
void two(void);


int main(void) {
  printf("starting now: \n");

  one_three();

  printf("%s", "done!\n");

  return 0;
}


void one_three(void) {
  printf("%s", "one\n");
  two();
  printf("%s", "three\n");
}


void two(void) {
  printf("%s", "two\n");
}
