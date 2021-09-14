#include <repoman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int create_config_files(char project_name[]) {
  chdir(project_name);

  system("mkdir .repoman");
  chdir(".repoman");

  system("touch description");
  system("touch project_name");

  FILE *project_name_file;

  project_name_file = fopen("project_name", "w");

  if (project_name_file == NULL) {
    printf("Cannot open .repoman/project_name. No such file\n");
    return 1;
  }

  fprintf(project_name_file, "%s", project_name);
  fclose(project_name_file);

  printf("Created configuration files\n");

  /* Change directory back to the project directory because
   * if the user wants to initialize the project as a git repo
   * `git init` will create the .git directory inside the .repoman
   * directory.
   */

  chdir("..");

  return 0;
}
