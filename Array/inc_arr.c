#include <stdio.h>
#include <stdlib.h>
int main() {
  int *p;
  p = (int *)malloc(5 * sizeof(int));
  p[0] = 1, p[1] = 23, p[2] = 44, p[3] = 24, p[4] = 12;
  int *q;
  q = (int *)malloc(10 * sizeof(int));

  for (int i = 0; i < 5; i++) {
    q[i] = p[i];
  }
  free(p);
  p = q;
  q = NULL;

  for (int i = 0; i < 5; i++) {
    printf("%d", p[i]);
  }

  return 0;
}
