#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **args, char **env) {
  // izpis dela pomnilnika od "args[9]" naprej
  char *t = args[0];
  for(int i=0; i<100; i++)
	printf("%c", t[i]<32 ? '?' : t[i]);
  printf("\n");

  // izpis vseh argumentov
  for(int i=0; i<argc;i++) 
	printf("%s\n", *args++);

  // ker smo se z "args" premaknili naprej, lahko argumente dobimo 
  // z negativnim indeksom 
  printf("%s\n", args[-3]); // prvi argument

  // izpis vseh okoljskih spremenljivk (dela, kadar je POSIX podprt) 
  for(int i=0; env[i] != NULL; i++)
	printf("%s\n", env[i]);
  
  printf("%s\n", getenv("PATH"));
}
