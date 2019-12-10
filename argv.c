#include <stdio.h>

// argv:
//   01234567
// 0 a.out
// 1 whatever
// 2 we
// 3 type
// 4 in
int main (int argc, char** argv) {
  printf("There are %d arguments.\n", argc);
  char* word;
  for (int i = 0; i < argc; i++) {
    word = argv[i];
    printf("%s\n", word);
  }
  return 0;
}
