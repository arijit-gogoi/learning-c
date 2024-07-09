#include <stdio.h>

int main(void) {
  int i = 10;
  int* p = &i;

  printf("Addrs of i: %p, Value of i: %d\n", (void *)&i, i);
  printf("Addrs of p: %p, Value of p: %p\n", (void *)&p, p);
}
