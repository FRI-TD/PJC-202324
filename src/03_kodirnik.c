#include <string.h>

char kljuc[]    = "abc";

void kodiraj(char besedilo[], int n) {
  int dk = strlen(kljuc);
  for(int i=0; i<n; i++) {
    besedilo[i] = besedilo[i] ^ kljuc[i % dk];
  }
}
