#include<stdio.h>

int main() {
  int i, j;

  printf("   ");
  for(i=0; i<=10; i++)
	printf("%3d", i);
  printf("\n");


  for(i=0; i<=10; i++) {
	printf(" %-2d", i);
	for(j=0; j<=10; j++)
	  printf("%3d", i*j);
	printf("\n");
  }
}
