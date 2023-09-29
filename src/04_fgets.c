#include <stdio.h>
#include <string.h>

#define MAX 5

// preberi tekstovno datoteko in jo (vrstico po vrstici) 
// izpisi na zaslon; vrstice pri tem ostevilci!
//
// 1. gjfslkjfsldf lsdlfsdlf
// 2. vsebina 2. vrstice
// 3. sdlkfgjslkdfg lčljksdf
int main() {
  char vrstica[MAX];
  int i=1;

  FILE *datoteka = fopen("test.txt", "r");  // odprem za branje
  FILE *izhodna  = fopen("test1.txt", "w"); // odprem za pisanje

  if (datoteka != NULL && izhodna != NULL) {
	int nl = 1; // prejsnje branje se je koncalo z \n

    while (!feof(datoteka)) { // file-end-of-file
      char * rez = fgets(vrstica, MAX, datoteka);
	  if (rez != NULL) {
		if (nl == 1) {
          fprintf(izhodna, "%d. %s", i++, vrstica); nl = 0;
        } else {
          fprintf(izhodna, "%s", vrstica);
        } 
		if (vrstica[strlen(vrstica)-1] == '\n') 
		  nl = 1;
	  }
    }
	printf("\n");

    fclose(datoteka);  // datoteko zaprem!
	fclose(izhodna);
  } else {
	printf("Napaka pri odpiranju datoteke!\n");
  }
}
