#include <stdio.h>

enum BARVE {rdeca=1, zelena=2, modra=4, rumena=8, oranzna=16, rjava=32};

enum tipke {alt=1, ctrl=2, fn=4, altgr=8, lshift=16, rshift=32};

typedef enum BARVE color; // namesto "enum BARVE" lahko od sedaj naprej pisem le "color"

int main() {
  enum BARVE b;

  b = zelena;

  if (b==modra) 
	printf("OK\n");

  printf("%d\n", zelena);

  int kupi = zelena | modra | rjava;

  if (kupi & rdeca == rdeca)
	printf("Rdeca\n");
  if (kupi & zelena == zelena)
	printf("Rdeca\n");

}
