#include <stdio.h>

int main(void) {
  int x;
  x = 10;
  int *px = &x;
  printf("%d \n", *px);
  *px = 1;
  printf("%d",x);
  
  return 0;
}