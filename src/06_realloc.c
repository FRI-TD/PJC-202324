#include <stdio.h>
#include <stdlib.h>

// podobno kot realloc
int* spremeniVelikosti(int* p, int n) {
  int  nV = n+1;
  
  int* nt = malloc (nV * sizeof(int));
  for(int i=0; i<n; i++)
	nt[i] = p[i];
  free(p);
  
  return nt;
}


int main() {
  int n=100;

  int* p; // kazalec na int
  p = malloc(n * sizeof(int));  // naredim tabelo velikosti n (100)
  p[0] = 1;
  p[1] = 5;

  p = spremeniVelikosti(p, n); n++;
  
  printf("%d\n", p[0]);

  return 0;
}

