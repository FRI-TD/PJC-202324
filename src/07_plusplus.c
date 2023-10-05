#include <stdio.h>


int main() {
  int x = 5;
  int y = 6;

  int *p = &y;
  *p = 10;      // y = 10;
  p++;
  *p = 11;      // ??  (x=11)

  printf("x=%d, y=%d\n", x,y);


  p = &x;
  printf("p=%p\n", p);
  p++; 
  printf("p=%p\n", p);

  void *q;
  printf("x=%d\n", x);
  q = &x;
  *(int *)q = 20; 
  printf("x=%d\n", x);
  
  // q++;
}
