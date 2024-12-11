#include <stdio.h>
#include <limits.h>

int input, maxval, minval;
int maxval = INT_MIN;
int minval = INT_MAX;

int main(void) {
  
  while (scanf_s("%d", &input) != EOF) {
    if (input > maxval) {
      maxval = input;
    } 
    if (input < minval) {
      minval = input;
    }
  }
  
  printf_s("Max val: %d\n", maxval);
  printf_s("Min val: %d\n", minval);
  
  return 0;
}


