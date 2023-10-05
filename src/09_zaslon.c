#include <stdlib.h>
#include <stdio.h>

// ustvari "zaslon" kot tabelo trabel, napolni zaslon in izpisi vsebino;
#define W 80
#define H 25

int main() {
  char **zaslon;

  zaslon = malloc(H * sizeof(char *));
  for(int i=0; i<H; i++)
	zaslon[i] = malloc(W * sizeof(char));

  
  char znaki[] = {'#','$','+','-'};  // prostor za 4 znake
  //char *znaki = "#$+-";              // prostor za 5 znakov
  

  for(int i=0; i<H; i++)
	for(int j=0; j<W; j++)
	  zaslon[i][j]=znaki[(i+j)%4];

  for(int i=0; i<H; i++)
	for(int j=0; j<W; j++)
	  zaslon[i][j]=znaki[(i+j)%4];

  for(int i=0; i<H; i++) {
	for(int j=0; j<W; j++)
	  printf("%c", zaslon[i][j]);
	printf("\n");
  }

  // preden koncam program, pocistim pomnilnik
  for(int i=0; i<H; i++)
	free(zaslon[i]);
  free(zaslon);
}
