#include <stdio.h>
#include <stdlib.h>

typedef struct kompleksno {
  double re;
  double im;
} cplx;



int main() {
  cplx a = {2,3};

  cplx *w; // kazalec na kompleksno stevilo
  w = malloc(sizeof(cplx));
  (*w).re = 3;
  (*w).im = 5;

  w->im = 7;

  printf("%.2f\n", (*w).re);

  free(w);
  return 0;
}

