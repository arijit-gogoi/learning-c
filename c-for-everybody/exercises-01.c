#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char name[20];

  printf("Enter name\n");
  fgets(name, sizeof(name), stdin);

  // remove trailing newline from fgets
  name[strcspn(name, "\n")] = 0;

  printf("Hello %s", name);
  return EXIT_SUCCESS;
}
