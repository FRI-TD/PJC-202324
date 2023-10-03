#include <stdio.h>
#include <math.h>

typedef struct kompleksno {
  double re;
  double im;
} cplx;


void izpisi(cplx x) {
  printf("%.2f %c %.2f i\n", x.re, x.im >= 0 ? '+' : '-' , fabs(x.im));
}

cplx vsota(cplx a, cplx b) {
  cplx v;
  v.re = a.re + b.re;
  v.im = a.im + b.im;
  return v;
}

int main() {
  cplx a = {-1,2};            // 1 + 2i
  cplx b = {.re=2, .im=-1};  // 2 - i
 
  cplx w = vsota(a,b);

  izpisi(a);
  izpisi(b); 

  return 0;
}
