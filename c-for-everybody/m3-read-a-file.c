#include <stdio.h>

int main() {
  char line[1000];
  FILE *handle;
  
  fopen_s(&handle, "romeo.txt", "r");
  while (fgets(line, 1000, handle) != NULL) {
    printf("%s", line);
  }
  return 0;
}
