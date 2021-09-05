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
  } else {
    printf("Unknown argument %s\n", arg1);
    return 1;
  }

  return 0;
}
