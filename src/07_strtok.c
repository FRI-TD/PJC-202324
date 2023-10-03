#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() { //  0   1  2 3  456  7
  char str[] = "abc:def::ghi::::xyz";
  printf("%s\n", str);
  // char *str    = "abc:def:ghi";
  
//  char *str = malloc(100*sizeof(char));
//  scanf("%s", str);

  char delims[] = ":";
  char *result;
  int i=-1;
  result = strtok(str, delims);

  while (result != NULL) {
	char *back = result;int cnt=0;
	do {
	  back--;cnt++;
	  if (back < str) break;
    } while (*back == delims[0]);
    i = i + cnt;

	printf("%d - %s \n", i, result);

    result = strtok(NULL, delims);
  }
}
