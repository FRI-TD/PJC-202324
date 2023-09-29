#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define N 40000

void napolni(int t[], int n) {
  for(int i=0; i<n; i++)
	t[i] = rand();
}

void izpisi(int t[], int n) {
  for(int i=0; i<n; i++)
	printf("%3d ", t[i]);
  printf("\n");
}

void bubbleSort(int t[], int n) {
  for (int i=0; i<n; i++) {
	//izpisi(t,n);
    bool sprememba = false;
	for (int j=0; j<n-1-i; j++)
	  if (t[j] > t[j+1]) { // zamenjaj elementa
		  sprememba = true;
//        int tmp = t[j];
//		  t[j]    = t[j+1];
//		  t[j+1]  = tmp;

//		t[j]   = t[j] + t[j+1];
//		t[j+1] = t[j] - t[j+1];
//		t[j]   = t[j] - t[j+1];

		t[j]   = t[j] ^ t[j+1];
		t[j+1] = t[j] ^ t[j+1];
		t[j]   = t[j] ^ t[j+1];
	  }
	if (!sprememba) break;
  }
}



int main() {
  int t[N];
  clock_t start, end;

  napolni(t, N);
  //izpisi(t,N);

  start = clock();
  bubbleSort(t, N);
  end   = clock();

  printf("Trajanje (s): %.2f\n", (double)(end-start) / CLOCKS_PER_SEC) ;
 
  //izpisi(t, N);
}

