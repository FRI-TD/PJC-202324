#include<stdio.h>

int main(int argc, char *args[]) {
  printf("Ime programa: %s\n", args[0]);

  for(int i=1; i<argc; i++) 
    printf("%d. %s\n", i, args[i]); 
}
