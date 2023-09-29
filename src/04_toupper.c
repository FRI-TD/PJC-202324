#include <stdio.h>
#include <ctype.h>

// prepise args[1] v args[2], pri tem vse male crke sprememni v velike
int main(int argc, char *args[]) {
  FILE *vhod  = fopen(args[1], "r");
  FILE *izhod = fopen(args[2], "w");

  if (vhod != NULL && izhod != NULL) {
    while (!feof(vhod)) {
      int c = fgetc(vhod);
      c = toupper(c); 
	  fputc(c, izhod);
	}
  }
  fclose(vhod);
  fclose(izhod);
}
