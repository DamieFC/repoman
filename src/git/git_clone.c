#include <git.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int git_clone(char repo_url[]) {
  if (strcmp(repo_url, "") == 0) {
    printf("No URL given\n");
    return 1;
  }

  char clone_command[81];

  snprintf(clone_command, sizeof(clone_command), "git clone %s", repo_url);
  system(clone_command);

  return 0;
}
