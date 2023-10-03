#include <stdio.h>
#include <string.h>

int main() {
  char *niz = "To je dolg niz";
  printf("%s\n", niz);

  char *n = niz;
  while (n != NULL) {
    n = strstr(niz, " ");  

    printf("%s\n", n);

	niz = n + 1;  
	// niz = n++;
    // niz = ++n;
    
  }
}
