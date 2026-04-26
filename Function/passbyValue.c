#include <stdio.h>
int swap(int a, int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main() {
  int x = 10;
  int y = 20;
  swap(x, y);
  printf("a = %d and b = %d", x, y);
  return 0;
}
