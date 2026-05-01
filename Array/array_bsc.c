#include <stdio.h>

int main() {
  int a[5];
  /*
  int b[5] = {1,3,5,6,2};
  int c[10] = {2,3,5};
  int d[5] = {0};
  int e[] = {2,4,25,35};
  */

  for (int i = 0; i < 5; i++) {
    printf("%u \n", &a[i]);
  }
  return 0;
}
