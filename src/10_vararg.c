#include <stdio.h>
#include <stdarg.h>

// sestej vsa stevila
int sestej(int stevila, ...) {
  va_list arg_list;
  int stevilo;

  int sum = 0;

  va_start(arg_list, stevila);
  for(stevilo = stevila; stevilo != 0; stevilo = va_arg(arg_list, int)) {
    sum += stevilo;
  }
  va_end(arg_list);

  return sum;
} 

int main() {
  printf("%d\n", sestej(10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0));
}
