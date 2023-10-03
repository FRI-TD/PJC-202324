#include <stdio.h>

// tip "opereacija" je funkcija, ki prejme 2 int in vrne int
typedef int operacija(int, int);

int sestej(int x, int y) {
  return x+y;
}

int zmnozi(int x, int y) {
  return x*y;
}

int nekaj(int a, int b, operacija *op) {
  return op(a,b);
}

int main() {
  operacija *op;

  int a=5;
  int b=10;

  op = zmnozi;
  int c = op(a,b);
  printf("%d\n", c);

  c = nekaj(a,b,sestej);
}
