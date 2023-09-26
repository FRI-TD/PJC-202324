#include <stdio.h>
#include <string.h>

// iz tipkovnice beri vrstice, dokler uporabnik ne vpise
// prazne vrstice; na koncu izpisi najdaljso prebrano vrstico
int main() {
  char trenutni[50];         // trenutni prebrani niz
  char najdaljsi[50] = "";   // najdaljsi do sedaj prebrani niz

  do {
	fgets(trenutni, 50, stdin);
	if (strcmp(trenutni, "\n") == 0) break; 

	if (strlen(trenutni) > strlen(najdaljsi))
	  strcpy(najdaljsi, trenutni);
  } while (1);

  printf("Najdaljsi: %s\n", najdaljsi);


  return 0;
}
