// program zgenerira N razlicnih stevil iz intervala [a,b]  
// (N je konstanta, a,b preberem iz tipkovnice)

#define N 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));  // incializiram generator nakljucnih stevil

  int stevila[N];  // tabela velikosti N

  int a, b;
  printf("Vpisi spodnjo mejo intervala (a): ");
  scanf("%d", &a);
  printf("Vpisi zgornjo mejo intervala (b): ");
  scanf("%d", &b);

  int x;
  for(int i=0; i<N; i++) {

zacetek:
    x = a + rand() % (b-a+1);
	
	for(int j = 0; j<i; j++) {
	  if (x == stevila[j]) {
		goto zacetek;
	  }
	}

	stevila[i]=x;
  }
  for(int i=0; i<N; i++)
	printf("%d\n", stevila[i]);
  printf("\n");
}
