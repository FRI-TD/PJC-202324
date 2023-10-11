#include <stdio.h>

int getNumber() {
  asm(
	".intel_syntax noprefix \n"
    "mov ebx, 42            \n"
  );
}

int main() {
  printf("%d\n", getNumber());
}
