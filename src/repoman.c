#include <git.h>
#include <repoman.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

  if (argc < 2) {
    help();
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

  } else if (strcmp(arg1, "git-clone") == 0) {
    char *url = argv[2];

    if (!url) {
      printf("URL required\n");
      return 1;
    }

    git_clone(url);

  } else if (strcmp(arg1, "git-pull") == 0) {
    git_pull();

  } else if (strcmp(arg1, "git-status") == 0) {
    git_status();

  } else {
    printf("Unknown argument %s\n", arg1);
    return 1;
  }

  return 0;
}
