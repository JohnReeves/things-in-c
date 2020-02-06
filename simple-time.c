#include <stdio.h>
#include <time.h>

int main(void) {
  printf("Hello World\n");

  time_t t = time(NULL);
  printf("any time %s\n", ctime(&t));

  struct tm *time;
  time = localtime(&t);
  printf("now time %s\n", asctime(time));

  printf("ok look, where is this executing?\n");
  return 0;
}
