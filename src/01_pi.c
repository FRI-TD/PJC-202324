#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  double pi;
  int a=10;  // izpis na 10 decimalk

  srand(time(NULL)); // inicializacija generatorja nakljucnih stevil

  int n = 10000;
  int s = 0;
  for(int i=0; i<n; i++) {
    double x = 1.0*rand() / RAND_MAX;
	double y = 1.0*rand() / RAND_MAX;
    if (x*x + y*y <= 1) s++;
  }
  pi = 4.0*s/n;

  printf("%.*f\n", a, pi);
}
