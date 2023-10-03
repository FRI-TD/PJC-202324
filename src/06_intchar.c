#include <stdio.h>

int main() {
  int a[] = {1,2,3,4};

  int *pa;   // kazalec na int
  pa = a;    // pokažem na prvi element tabele
  *pa = 5;

  printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

  *(pa+2) = 7;  // pa+0 ... prvi, pa+1 ... drugi, pa+2 ... tretji element
  printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);


/*
  char *pc;
  pc  = (char *) a;
  *(pc+3) = 10;
  printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
*/

  return 0;
}

