#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv) {
  char name[512];
  printf("Who are you? ");
  scanf("%s", &name);
  printf("Hello, %s.\n", name);
  return 0;
}
