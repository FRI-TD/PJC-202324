#include <stdio.h>

int strlen2(char *s) {
  int i=0;
  while (s[i] != '\0') i++;
  return i;
}

int strlen1(char s[]) {
  int i=0;
  while (*s != '\0') {
    s = s + 1;  // p++
	i++;
  }
  return i;
}

int main() {
  char niz[] ="Beseda";
  printf("%d\n", strlen1(niz));
  printf("%d\n", strlen2(niz));  

  return 0;
}

