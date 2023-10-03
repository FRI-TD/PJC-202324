#include <stdio.h>

int main() {
  int a[] = {1,2,3,4,5};
  int max = 5; // stevilo elementov v tabeli

  int *p = a; // pokazem na prvi element tabele

  while (p <= &a[max-1]) {
	printf("%d\n", *p);
	p++;
  }
}

