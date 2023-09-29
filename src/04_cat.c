#include <stdio.h>
#include <string.h>

#define MAX 50

// izpise vsebino datoteke filename
void catFile(char filename[]) {
  char vrstica[MAX];

  FILE *vhod;
  if (strcmp(filename, "")==0)
	vhod = stdin;
  else
    vhod = fopen(filename, "r");


  while (!feof(vhod)) {
    char *res = fgets(vrstica, MAX, vhod);
	if (res != NULL) 
	  printf("%s", vrstica);
  } 
  fclose(vhod);
}

int main(int argc, char *args[]) {
  if (argc > 1) {
    for(int i=1; i<argc; i++)
	  catFile(args[i]);
  } else {
    catFile("");
  }
}
