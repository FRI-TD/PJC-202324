#include <stdio.h>

int main() {
  // printf("velikost int: %d\n", sizeof(float));

  int i = -1;
  if (i < i+1) 
	printf("i - OK\n");
  else 
	printf("i - NOK\n");

  unsigned int ui = -1;
  if (ui < ui+1) 
	printf("ui - OK\n");
  else 
	printf("ui - NOK\n");

}
