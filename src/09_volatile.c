#include <stdio.h>

int main() {
  volatile int i = 1;
  int j = 2;

  int *p;
  p  = &j;    // s p pokazemo na j
  *p = 10;    // spremenimo vrednost tam, kamor kaze p (torej spremenimo j)
 
   p++;       // pokazemo na naslednji int (torej tja, kjer je i) 
  *p = 20;    // spremenimo i

  printf("i=%d, j=%d\n", i,j); 
}
