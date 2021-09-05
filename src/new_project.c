#include <repoman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int create_new_project(char name[]) {
  char create_command[31];
  snprintf(create_command, sizeof(create_command), "mkdir %s", name);
  system(create_command);

  printf("Created project %s\n", name);

  return 0;
}
