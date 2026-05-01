#include <stdio.h>
#include <stdlib.h>

void linear_sc(int *A, int key, int n) {
  for (int i = 0; i < n; i++) {
    if (key == A[i]) {
      printf("Key found at index %d\n", i);
      return;
    }
  }
  printf("Key not found\n");
}

int main() {
  int *A;
  int n, key;

  printf("Enter the size of an array: ");
  scanf("%d", &n);

  A = (int *)malloc(n * sizeof(int));

  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  printf("Enter the key you want to search: ");
  scanf("%d", &key);

  linear_sc(A, key, n);

  free(A);
  return 0;
}
