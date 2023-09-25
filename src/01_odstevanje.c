#include<stdio.h>

void odstevanje(int n) {
  for(int i=n; i>0; i--) {
	printf("%d\n", i);
  }
}

int main() {
  odstevanje(10);

  return 0;   //exit code 0
}
