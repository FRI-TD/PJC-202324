// program posteje in izpise stevilo znakov v datoteki 
// (dolzina datoteke); ime datoteke je podano v prvem argumentu

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {
  if (argc < 2) {
	printf("Uporaba: %s ime_datoteke\n", args[0]);
	exit(1);
  }

  int bc = 0; // stevilo prebranih bajtov

  FILE *vhod = fopen(args[1], "rb");
  while (!feof(vhod)) {
    int c = fgetc(vhod);
	if (c>=0) {
      bc++;
	}
  }
  fclose(vhod);

  printf("%d\n", bc);

  return 0;
}
