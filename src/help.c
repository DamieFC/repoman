#include <repoman.h>
#include <stdio.h>

int help() {
  printf("Usage: ./repoman {option} {argument}\n"
         "Create a new project: `create {project_name}`\n"
         "Print the version: `version`\n"
         "Clone a git repo: `git-clone {url}`\n"
         "Fetch changes from a remote git repo: `git-pull`\n"
         "Push changes to a git repo: `git-push`\n"
         "Check the status of a git repo: `git-status`\n");

  return 0;
}
