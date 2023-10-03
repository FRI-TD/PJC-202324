#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// izpis 10 nakljucnih stevil med 10 in 20
int main() {
  int a= 10;
  int b= 20;

  srand(time(NULL));

  for(int i=0; i<10; i++) {
    int x = a + rand() % (b-a+1);
    printf("%d\n", x);    
  }
}

