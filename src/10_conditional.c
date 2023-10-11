#include <stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG
  printf("A %d\n", DEBUG);
#endif

  printf("Test\n");

#ifdef DEBUG
  printf("B\n");
#elif TEST
  printf("C\n");
#endif
}

