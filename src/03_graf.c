#include <stdio.h>
#include <math.h>

#define H 25
#define W 80

char zaslon[H][W];

void zbrisiZaslon() {
  for(int i=0; i<H; i++)
	for(int j=0; j<W; j++)
	  zaslon[i][j]=' ';
}

void izpisi() {
  for(int i=0; i<H; i++) {
	for(int j=0; j<W; j++)
	  printf("%c", zaslon[i][j]);
	printf("\n");
  }
}

void koordinatniSistem() {
  // vodoravna crta
  for(int j=0; j<W; j++)
	zaslon[H/2][j] = '-';

  for(int i=0; i<H; i++)
	zaslon[i][W/2]='|';
}

void graf() {
  double x1 = -3.14;
  double x2 =  3.14;
  double y1 = -1.1;
  double y2 =  1.1;

  for(int i=0; i<W; i++) {
    double x = x1 + i*(x2-x1)/(W-1);
	double y = sin(x);
    int j = (H-1)*(y-y1)/(y2-y1);

	zaslon[H-j][i] = '*';

  }

}

int main() {
  zbrisiZaslon();
  koordinatniSistem();

  graf();

  izpisi();

  return 0;
}
