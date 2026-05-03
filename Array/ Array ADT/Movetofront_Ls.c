#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

void Mtf_ls(int *A, int n, int key) {
  for (int i = 0; i < n; i++) {
    if (key == A[i]) {
      swap(&A[i], &A[0]);
      break;
    }
  }
}

void Display(int *A, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d", A[i]);
  }
}

int main() {
  int *A;
  int n, key;
  printf("Enter the size of an array = ");
  scanf("%d", &n);

  A = (int *)malloc(n * sizeof(int));

  printf("Enter your value in array = ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  printf("Enter the key element you want to search = ");
  scanf("%d", &key);

  Mtf_ls(A, n, key);
  Display(A, n);
}
