#include <stdio.h>

   
// It’s important to note that sizeof is a compile-time operation.

int a = 1;
int main(void) {
  printf("%zu\n", sizeof a);
  printf("%zu\n", sizeof(int));   
  printf("%zu\n", sizeof(char));
};
