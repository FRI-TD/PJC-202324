#include <stdio.h>

#define N 5
#define min(X,Y) ((X) < (Y) ? (X) : (Y))

#define forever for(;;)

#define dprint(expr)  printf(#expr " = %f\n", expr) 

int main() {
  for (int i=0; i<N; i++)
	printf("%d\n", N);

  printf("%d\n", min(10, 7));

  int a=7;
  int b=8;
  printf("%d\n", min(a++, b));
  printf("%d\n", a);
 
  //forever {
  //  printf("Hura\n");
  //}

  double pi = 3.14;
  dprint((pi + 7)/3);

}
