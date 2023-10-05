#include <stdio.h>

int main() {
  FILE *vhod  = fopen("medo.bmp",  "rb");
  FILE *izhod = fopen("medoX.bmp", "wb");

  if (vhod != NULL && izhod != NULL) {
    while (!feof(vhod)) {
      int c = fgetc(vhod);
	  fputc(c, izhod);
	}

	fclose(vhod);
	fclose(izhod);
  }
} 	
