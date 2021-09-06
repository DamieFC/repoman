#include <repoman.h>
#include <stdio.h>

int help() {
  printf("Usage: ./repoman {option} {argument}\n"
         "Create a new project: `create {project_name}`\n"
         "Print the version: `version`\n"
         "Clone a git repo: `git-clone {url}`\n"
         "Fetch changes from a remote repo: `git-pull`\n"
         "Check the status of a repo: `git-status`\n");

  return 0;
}
