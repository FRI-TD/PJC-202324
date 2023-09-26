// napisimo funkcijo dolzina, ki vrne enak rezultat kot funkcija strlen

#include <stdio.h>
#include <string.h>

int dolzina(char niz[]) {
  int d = 0;
  while (niz[d] != '\0') d++;
  
  return d;
}

int main() {
  char besedilo[50];

  printf("Vpisi besedilo: ");
  fgets(besedilo, 50, stdin);

  printf("Dolzina vpisanega besedila (funkcija dolzina): %d\n", dolzina(besedilo));
  printf("Dolzina vpisanega besedila (funkcija strlen) : %d\n", strlen(besedilo));	

  // izpis niza v obratnem vrstnem redu
  printf("Izpis v obratnem vrstnem redu: \n");
  for(int i=dolzina(besedilo)-1; i>=0; i--)
	printf("%c", besedilo[i]);

  // izpis ascii kode zadnjega prebranega znaka (znak za novo vrstico)
  printf("\n");
  printf("%d", besedilo[dolzina(besedilo)-1]);
  printf("\n");
}
