#include<stdio.h>
#include<stdlib.h>

// program sesteje prva dva argumenta in izpise rezultat
int main(int argc, char *args[]) {
  if (argc != 3) {
	printf("Uporaba: %s x y\n", args[0]);
	exit(1);
  }
  
  int x = atoi(args[1]);  // "7" -> 7
  int y = atoi(args[2]);
  printf("%d + %d = %d \n", x, y, x+y);
}
