#include <stdio.h>
#include <math.h>

typedef struct tocka {
  int x;
  int y;
} tck;     // tip "tck" je tipa "struck tocka"

double razdalja(tck t) {
  return sqrt(t.x*t.x+t.y*t.y);
}

// zamenja koordinati x in y
struct tocka zamenjaj(struct tocka t) {
  int tmp = t.x;
  t.x     = t.y;
  t.y     = tmp;

  return t;
}


int main() {
  struct tocka t1 = {3,4}; // t1.x=3, t1.y=4

  tck t2 = {1};   // t2.x=1, t2.y=???
  
  tck t3 = {.y=4, .x=2};   // t3.x=2, t3.y=4

  printf("(%d, %d, %.2f)\n", t1.x, t1.y, razdalja(t1));
  printf("(%d, %d, %.2f)\n", t2.x, t2.y, razdalja(t2));
  printf("(%d, %d, %.2f)\n", t3.x, t3.y, razdalja(t3));

  printf("----------------------------\n");
  printf("t1 pred zamenjavo: (%d, %d)\n", t1.x, t1.y);
  t1 = zamenjaj(t1);
  printf("t1 po zamenjavi  : (%d, %d)\n", t1.x, t1.y);
}
