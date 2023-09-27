#include <stdio.h>
#include <string.h>

void kodiraj(char besedilo[], int n);
extern char kljuc[];

int main() {
  char besedilo[] = "abc";

  strcpy(kljuc, "def");

  int n = strlen(besedilo);
  kodiraj(besedilo, n);
  printf("%s\n", besedilo);
  kodiraj(besedilo, n);
  printf("%s\n", besedilo);
}
