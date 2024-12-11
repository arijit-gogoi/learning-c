#include <stdio.h>

void foo(float x[5]) {
    printf("inside foo\n");
    printf("sizeof flt: %zu\n", sizeof x);     // 8?! What happened to 48?
    printf("sizeof(float): %zu\n", sizeof(float));  // 4 bytes per int
    printf("length of flt: %zu\n", sizeof x / sizeof(float));  // 8/4 = 2 ints?? WRONG.
}
// Arrays are contiguous memory locations.
// All elements are stored in a single block of memory.
// Memory is allocated when the program is compiled.
// An array's type cannot be changed at runtime.
// Arrays are not reference types. 
// Assigning an array to a variable copies the whole array.
int main(void) {
  size_t i;
  // The space occupied by an array (sizeof)
  // is fixed and cannot be changed.
  // It is part of the type of the array.
  
  // Declaring an array of floats, 
  // The array flt has length 4.
  float flt[5];

  flt[0] = 3.14159;  
  flt[1] = 1.41421;
  flt[2] = 1.61803;
  flt[3] = 2.71828;
  flt[4] = 1.11111;
  
  for (i = 0; i < 5; i++) {
      printf("flt[%zu]: %f\n", i, flt[i]);
  }
  
// How to find the length of an array?
// C does not record the size of an array.
// You have to manage it separately.
// Doing `sizeof flt` does not give 
// the bytes taken up by the array. 
// `sizeof flt` gives the size of
// the first element of the array flt.
printf("sizeof flt: %zu\n", sizeof flt); // 20
printf("sizeof(float): %zu\n", sizeof(float)); // 4
printf("length of flt: %zu\n", sizeof flt / sizeof (float)); // 5
puts("\n");

// When you pass an array to a function,
// you are passing a pointer to
// the first element of the array.
foo(flt);
  
// C barely has arrays.
// Arrays in C syntactic sugar for pointers.
// But that is good enough.
}
