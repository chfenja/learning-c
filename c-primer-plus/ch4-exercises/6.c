#include <stdio.h>
#include <string.h>

int main(void) {
  char first_name[20], last_name[20];
  int char_num_fname, char_num_lname;

  printf("Enter your first name: ");
  scanf("%s", first_name);
  printf("Enter your last name: ");
  scanf("%s", last_name);

  char_num_fname = strlen(first_name);
  char_num_lname = strlen(last_name);

  printf("%s %s\n", first_name, last_name);
  printf("%*d %*d\n", char_num_fname, char_num_fname, char_num_lname, char_num_lname);
  printf("%s %s\n", first_name, last_name);
  printf("%-*d %-*d\n", char_num_fname, char_num_fname, char_num_lname, char_num_lname);

  return 0;
}
