#include <stdio.h>
#include <stdint.h>

int main() {
  FILE *vhod  = fopen("medo.bmp",  "rb");
  FILE *izhod = fopen("medoY.bmp", "wb");

  if (vhod != NULL && izhod != NULL) {

    int8_t buffer[4096];

	int k; // koliko bajtov sem dejansko prebral
    do {
      k = fread(&buffer, sizeof(int8_t), 4096, vhod);
	  if (k!=0)
	   fwrite(buffer, sizeof(int8_t), k, izhod);
	}  while(k != 0);

	fclose(vhod);
	fclose(izhod);
  }
} 	
