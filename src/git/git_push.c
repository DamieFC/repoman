#include <git.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool signed_commit = false;

int git_push(int is_signed_commit) {
  system("git add .");

  char *push_command;

  if (is_signed_commit == 1) {
    signed_commit = true;
  }

  if (signed_commit) {
    push_command = "git commit -S -a";
  } else {
    push_command = "git commit -a";
  }

  system(push_command);

  return 0;
}
