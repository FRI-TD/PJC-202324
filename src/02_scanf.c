#include <stdio.h>

// program prebere ime in starost osebka in poodatke izpise na zaslon
int main() {
  int starost;  
  char ime[6];  // spremenljivka ime je tipa 'string' (največ 5 znakov)


  printf("Vpisi ime: ");
  // scanf("%s", ime);     // & ni potreben, ker je "ime" niz (tabela)  
  fgets(ime, 5, stdin);    // niz berem z ukazom fgets, da omejim dolzino
  while(getchar() != '\n');

  printf("Vpisi starost: ");
  scanf("%d", &starost);  // obvezna uporaba & !!!

  printf("\n Pozdravljen %s, star si %d let.\n", ime, starost);
}
