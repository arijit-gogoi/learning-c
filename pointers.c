#include <stdio.h>

// addone gets a copy of the pointer passed into it
// which is then assigned to j
void addone(int* j) {
  *j = *j + 1;
}

int main(void) {
  int i = 10;
  int* p = &i;

  printf("Addrs of i: %p, Value of i: %d\n", (void *)&i, i);
  printf("Addrs of p: %p, Value of p: %p\n", (void *)&p, p);

  // The indirection operator * is used to dereference a pointer.
  *p += 1;  
  printf("Addrs of i: %p, Value of i: %d\n", (void *)&i, i);
  printf("Addrs of p: %p, Value of p: %p\n", (void *)&p, p);

  puts("\n");
  // Dereferencing enables passing pointers to functions.
  printf("i = %d\n", i); // i = 11
  
  addone(&i);
  printf("addone(&i)\n");
  printf("i = %d\n", i);
  
  addone(p);
  printf("addone(p)\n");
  printf("i = %d\n", *p);
}

