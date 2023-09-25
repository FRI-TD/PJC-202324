#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// izpis 10 nakljucnih stevil med 10 in 20

int main() {
  double pi;
  int a=10;

  srand(time(NULL));

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
