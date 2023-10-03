#include <stdio.h>

int main() {

  int x;   // to bom uporabil za kazalec
  int y=7; // to vrednost bi rad spremenil

  x = (int) &y;

  printf("%X\n", x);
  printf("%p\n", &y);

  printf("y=%d\n", y);
  *((int *)x) = 15;
  printf("y=%d\n", y);


  return 0;
}
