#include <stdlib.h>
#include <stdio.h>

int primerjaj(const void *elem1, const void *elem2) {
  int e1 = *((int *)elem1);
  int e2 = *((int *)elem2);
  return e1 - e2;
}

int main() {
  int n   = 9;
  int t[] = {5,1,9,7,4,3,2,8,0};

  qsort(t, n, sizeof(int), primerjaj);

  for(int i=0; i<n; i++) {
    printf("%d ", t[i]);
  }
  printf("\n");
}
