#include <stdio.h>
#include <sys/stat.h> // mkdir()

int repoman(char usage[], char project[], char lang[]) {
  if(!usage && !project && !lang) {
    fprintf(stderr, "What the heck - there's nothing here, moron.");
  }
  else if(usage[0] == "help") {
    ; // nothing yet
  }
}
