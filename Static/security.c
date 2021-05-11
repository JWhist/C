#include <stdio.h>
#include "log.h"

int main() {
  char user[25];

  printf("Enter username: ");
  fgets(user, 25, stdin);

  create_log(user);
  return 0;
}