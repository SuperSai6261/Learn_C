#include <stdio.h>
#include <stdlib.h>

int *fun(int n) {
  int *p;
  p = (int *)malloc(n * sizeof(int));
  return p;
}

int main() {
  int *a;
  int n = 5;

  a = fun(n);

  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  free(a);
  return 0;
}
