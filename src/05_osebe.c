#include <stdio.h>
#define N 3

struct oseba {
  char ime[10];
  char priimek[10];
  int starost;
};


int main() {
  struct oseba o[N];
  
  for(int i=0; i<N; i++) {
    printf("%d Vpisi ime:  ", i+1); scanf("%s",  o[i].ime);
    printf("Vpisi priimek: ");      scanf("%s",  o[i].priimek);
    printf("Vpisi starost: ");      scanf("%d", &o[i].starost);
  }

  for(int i=0; i<N; i++)
    printf("(%s, %s, %d)\n", o[i].ime, o[i].priimek, o[i].starost);
}
