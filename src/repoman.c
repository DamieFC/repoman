#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h> // mkdir()

int repoman(char usage[], char project[], char lang[]) {
  if(!usage && !project && !lang) {
    perror("What the heck - there's nothing here, moron.");
    exit(EXIT_FAILURE);
  }
  else if(usage[0] == "help") {
    printf("Welcome to repoman by gnuoveryou. There's not much here yet.");
  }
}
