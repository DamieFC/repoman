#include <repoman.h>
#include <stdio.h>

int help() {
  printf("Usage: ./repoman {option} {argument}\n"
         "Create a new project: `create {project_name}`\n"
         "Print the version: `version`\n");

  return 0;
}
