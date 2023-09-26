#include <stdio.h>
#include <stdlib.h>

// iz tipkovnice beri znak po znaku in jih izpisuj na zaslon (echo)
int main() {
  // spodnji ukaz omogoci branje znaka po znaku (sicer lahko 
  // znake beremo sele po tem, ko uporabnik pritisne Enter) 
  // Ukaz dela le v linux okolju.
  // system("/bin/stty raw");

  char c;
  do {
	c = getchar();
	putchar(c);
  } while (c!=' ');
} 
