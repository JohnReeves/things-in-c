#include <stdio.h>

int main(void) {
  typedef struct Device {
    volatile int item1;
    volatile int item2;
    volatile int item3;
    volatile int item4;
    volatile int item5;
  } Device;

  Device device = {72,144,73,145,74};
  Device *dev = &device;

  while (dev->item1 != 1){

    printf("%i\n ", dev->item2);
    break;
  }
  printf("Hello World\n");
  return 0;
}
