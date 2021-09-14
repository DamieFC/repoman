#include <git.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool signed_commit = false;

int git_push(int is_signed_commit) {
  system("git add .");

  char *commit_command;

  if (is_signed_commit == 1) {
    signed_commit = true;
  }

  if (signed_commit) {
    commit_command = "git commit -S -a";
  } else {
    commit_command = "git commit -a";
  }

  system(commit_command);
  system("git push");

  return 0;
}
