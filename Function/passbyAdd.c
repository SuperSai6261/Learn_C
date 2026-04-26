#include <stdio.h>
void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int a = 12;
  int b = 21;
  swap(&a, &b);
  printf("a = %d  and  b = %d", a, b);
  return 0;
}
