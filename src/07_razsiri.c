#include <stdlib.h>

// razsiri(p,n) .... rezervira 2*n pomnilnika
// za p, vrednosti iz stare lokacije prepise na novo
// in primerno spremeni p in n
void razsiri(int **p, int *n) {
  int *q = malloc(2 * (*n) * sizeof(int));
  for(int i=0; i<*n; i++)
	q[i] = (*p)[i];

  *n = 2 * (*n);
  free(*p);
  *p=q;
}


int main() {
  int  n = 100;
  int *p = malloc(n*sizeof(int));

  razsiri(&p,&n);
}
