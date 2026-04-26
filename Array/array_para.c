#include <stdio.h>

void fun(int A[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", A[i]);
  }
}

int main() {
  int A[] = {1, 2, 3, 4, 5};
  fun(A, 5);
}
