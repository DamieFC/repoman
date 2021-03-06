#include <dirent.h>
#include <errno.h>
#include <repoman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int create_new_project(char name[]) {
  DIR *project_dir = opendir(name);

  if (project_dir) {
    closedir(project_dir);
    printf("Directory %s already exists\n", name);
    return 1;
  } else if (ENOENT == errno) {
    printf("Creating...\n");
  } else {
    printf("opendir() failed\n");
    return 1;
  }

  int command_sz = strlen(name) + 7;
  char command[command_sz];

  snprintf(command, sizeof(command), "mkdir %s", name);
  system(command);

  create_config_files(name);

  char user_input;

  printf("Do you want to initialize this project as a git repo? [yn]: ");
  scanf(" %c", &user_input);

  if (user_input == 'y') {
    system("git init");
  } else if (user_input == 'n') {
    printf("Repository *not* initialized as a git repo\n");
  } else {
    printf("Unknown option, not initializing this repo as a git repo\n");
  }

  printf("Created project %s\n", name);

  return 0;
}
