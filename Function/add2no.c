#include <stdio.h>
int add(int a, int b) {
  int c;
  c = a + b;
  return c;
}
int main() {
  int a = 5;
  int b = 2;
  int z = add(a, b);
  printf("a+b = %d\n", z);
  return 0;
}
