#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#pragma pack(1)

typedef struct  {
  uint32_t magic;
  uint16_t minor;
  uint16_t major;
  uint16_t cpsize;
} header;


uint16_t swap16(uint16_t x) {
  return (x >> 8) | (x << 8);
}

uint32_t swap32(uint32_t x) {
  return swap16(x>>16) | (swap16(x & 0xFFFF)<<16);
}

int main(int argc, char **args/*, char **env*/) {
  FILE *vhod = fopen("A.class", "rb");
  header h;

  if (vhod != NULL) {
    fread(&h, sizeof(header), 1, vhod);
    fclose(vhod);

	printf("Magic: %X\n", swap32(h.magic));
	printf("Minor version: %d\n", swap16(h.minor));
	printf("Major version: %d\n", swap16(h.major));
	printf("Constant pool count: %d\n", swap16(h.cpsize));
  }
}
