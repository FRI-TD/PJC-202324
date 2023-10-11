#include <stdio.h>

// zamenja vrednosti lokalnih spr. in vrne drugo spr. 
int zamenjaj() {
  int a = 10; int b=20;

  asm(
	".intel_syntax noprefix \n"
	"mov eax, %1            \n"
    "mov %0, eax            \n" 
	:"=r" (b)   /* output */
	:"r" (a)   /* input */
	:"eax"      /* clobbered (umazani) registri */ 
  );

  return b;
}

int main() {
  printf("%d\n", zamenjaj());
}
