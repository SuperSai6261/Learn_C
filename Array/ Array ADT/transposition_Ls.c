#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void trans_Ls(int *A, int key, int n) {
  for (int i = 0; i < n; i++) {
    if (key == A[i]) {

      if (i > 0)
        swap(&A[i], &A[i - 1]);

      printf("Key found at index %d\n", i);
      return;
    }
  }

  printf("Key not found\n");
}

int main() {
  int *A;
  int n, key;

  printf("Enter the size of an array = ");
  scanf("%d", &n);

  A = (int *)malloc(n * sizeof(int));

  printf("Enter the elements = ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  printf("Enter the key you want to search = ");
  scanf("%d", &key);

  trans_Ls(A, key, n);

  free(A);
}
