#include <stdio.h>

int main() {

  int x=5;

  int *p;  // kazalec na int
  p  = &x;  // s p pokazem tja, kjer "zivi" spr. x
  *p = 42;  // tja, kamor kaze p, zapisem 42

  printf("%d\n", x);

  return 0;
}
