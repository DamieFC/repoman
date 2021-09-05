#include <repoman.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("No arguments given.\n");
    return 1;
  }

  const char *arg1 = argv[1];

  if (strcmp(arg1, "version") == 0) {
    printf("Repoman Version 0.01\n");
  } else if (strcmp(arg1, "help") == 0) {
    help();
  } else if (strcmp(arg1, "create") == 0) {
    char *project_name = argv[2];

    if (!project_name) {
      printf("Project name required\n");
      return 1;
    }

    create_new_project(project_name);

  } else {
    printf("Unknown argument %s\n", arg1);
    return 1;
  }

  return 0;
}
