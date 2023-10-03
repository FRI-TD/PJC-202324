#include <stdio.h>

void zamenjaj(int *x, int *y) {
  int t = *x;
  *x = *y;
  *y = t;
}

int main() {
  int a=5; int b = 10;

  printf("a=%d, b=%d\n", a,b);
  zamenjaj(&a,&b);
  printf("a=%d, b=%d\n", a,b);

  printf("%d\n", a, b);
}
