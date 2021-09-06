#include <repoman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int create_config_files(char project_name[]) {
  chdir(project_name);

  char command[21];

  snprintf(command, sizeof(command), "mkdir .repoman");
  system(command);

  chdir(".repoman");

  snprintf(command, sizeof(command), "touch description");
  system(command);

  snprintf(command, sizeof(command), "touch project_name");
  system(command);

  FILE *project_name_file;

  project_name_file = fopen("project_name", "w");

  if (project_name_file == NULL) {
    printf("Cannot open .repoman/description. No such file\n");
    return 1;
  }

  fprintf(project_name_file, "%s", project_name);
  fclose(project_name_file);

  printf("Created configuration files\n");

  return 0;
}
